
        
        def mkpieces
  piece(0,[],[0])
  $p.each do |a|
    a0 = a[0]
    a[1] = ud(a0)
    a[2] = rl(a0)
    a[3] = ud(rl(a0))
    a[4] = xy(a0)
    a[5] = ud(xy(a0))
    a[6] = rl(xy(a0))
    a[7] = ud(rl(xy(a0)))
    a.sort!
    a.uniq!
  end
  $p.uniq!.sort! {|x,y| x[0] <=> y[0] }
end
    
    # create and write to opml file
xml = Builder::XmlMarkup.new(indent: 2)
xml.instruct! :xml, version: '1.0', encoding: 'UTF-8'
xml.tag!('opml', version: '1.0') do
  # head
  xml.tag!('head') do
    xml.title TITLE
  end