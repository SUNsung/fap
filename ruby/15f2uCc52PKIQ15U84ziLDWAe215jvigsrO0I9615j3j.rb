
        
        def custom_release_header_anchors(markdown)
  header_regexp = %r!^(\d{1,2})\.(\d{1,2})\.(\d{1,2}) \/ \d{4}-\d{2}-\d{2}!
  section_regexp = %r!^### \w+ \w+$!
  markdown.split(%r!^##\s!).map do |release_notes|
    _, major, minor, patch = *release_notes.match(header_regexp)
    release_notes
      .gsub(header_regexp, '\\0\n{: #v\\1-\\2-\\3}')
      .gsub(section_regexp) { |section| '#{section}\n{: ##{slugify(section)}-v#{major}-#{minor}-#{patch}}' }
  end.join('\n## ')
end
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
            # rubocop:disable Style/MethodMissing
        def method_missing(key, value=nil)
          if value
            set(lvalue(key), value)
          else
            fetch(key)
          end
        end
        # rubocop:enable Style/MethodMissing
    
            # Skip validation behavior if no validators are registered for this key
        return super unless validators.key?(key)