
        
                  node.css('.method').each do |n|
            next unless n.at_css('dt[id]')
            name = n.at_css('.descname').content
            name = '#{class_name}::#{name}()'
            id = n.at_css('dt[id]')['id']
            entries << [name, id]
          end
        end
    
            css('.member-summary h3', 'li > h5').each do |node|
          node.name = 'div'
          node.remove_attribute('class')
        end
    
        EXIF_ROTATED_ORIENTATION_VALUES = [5, 6, 7, 8]
    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          @allowed_types && @rejected_types &&
          allowed_types_allowed? && rejected_types_rejected?
        end