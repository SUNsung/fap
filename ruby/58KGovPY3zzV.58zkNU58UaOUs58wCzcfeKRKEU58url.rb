
        
                return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        def name=(value)
      @name = value.try :strip
    end
    
              # Underscore methods
          if name.start_with?('Underscore')
            node.at_css('~ ul').css('li').each do |li|
              name = [type.downcase, li.at_css('a').content.split.first].join('.')
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type]
            end
            next
          end
    
              id = link['href'].remove('#')
          entries << [name, id]
          next if name =~ /Sass|Less|Glyphicons/
    
            doc
      end
    end
  end
end

    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end

    
      def transform_r(source, target)
    Dir.entries(source).each do |entry|
      next if [ '.', '..' ].include?(entry)
      source_entry = File.join(source, entry)
      target_entry = File.join(target, entry)