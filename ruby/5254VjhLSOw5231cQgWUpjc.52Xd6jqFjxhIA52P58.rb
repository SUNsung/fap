
        
                entries = []
    
        options[:only_patterns] = [
      /\Abook\/first-edition\//,
      /\Areference\//,
      /\Acollections\//,
      /\Astd\// ]
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
    all_environments = [
    :development,
    :production,
    :test
]
    
      # Extract the form
  res = '<form'
  form.attributes.each do |attr|
    res << ' #{attr[0]}='#{attr[1].gsub(''', '')}''
  end
  res << '> '
    
    File.readlines(sitelist).each do |site|
  site.strip!
  next if site.length == 0
  next if site =~ /^#/
    
            # Remove it form the session objects so freeup
        sessions.delete(s[:session])
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}