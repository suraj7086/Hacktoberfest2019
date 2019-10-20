def flatten(arr):
  flatArr = []
  def flattenArray(el):
    print(el)
    for i in el:
      if isinstance(i, list):
        if el.count(i):
          el.remove(i)
          el = flattenArray(el + i)
    return el
  for i in arr:
    if isinstance(i, list):
      flatArr = flatArr + flattenArray(i)
    else:
      flatArr.append(i)
  return flatArr

print(flatten([[[7], [[[7, [[[7],[[7,[[[[[7]]]]]], 7, [[[[[7]]]]]]]]]]]]]))