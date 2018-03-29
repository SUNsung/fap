
        
                def tag_option(key, value, escape)
          if value.is_a?(Array)
            value = escape ? safe_join(value, ' '.freeze) : value.join(' '.freeze)
          else
            value = escape ? ERB::Util.unwrapped_html_escape(value) : value.to_s
          end
          %(#{key}='#{value.gsub('''.freeze, '&quot;'.freeze)}')
        end
    
          get :redirect_to_with_block_and_options
    
          def handle_exception_with_mailer_class(exception)
        if klass = mailer_class
          klass.handle_exception exception
        else
          raise exception
        end
      end
  end
end

    
          text.split.each do |word|
        if sentences.first.present? && (sentences.last + [word]).join(' ').length > len
          sentences << [word]
        else
          sentences.last << word
        end
      end
    
            def initialize_test_deliveries
          set_delivery_method :test
          @old_perform_deliveries = ActionMailer::Base.perform_deliveries
          ActionMailer::Base.perform_deliveries = true
          ActionMailer::Base.deliveries.clear
        end
    
      #
  # Test assert_select_email
  #
    
      test 'default file delivery settings (with Rails.root)' do
    settings = { location: '#{Rails.root}/tmp/mails' }
    assert_equal settings, ActionMailer::Base.file_settings
  end
    
        def add(entry)
      if entry.is_a? Array
        entry.each(&method(:add))
      else
        add_entry(entry) unless entry.root?
      end
    end
    
              # Built-in events
          if node['id'] == 'Events-catalog'
            node.next_element.css('li').each do |li|
              name = '#{li.at_css('b').content.delete(''').strip} event'
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type] unless name == entries.last[0]
            end
            next
          end
    
          def additional_entries
        return [] if root_page?
        entries = []
    
    def ask(message, valid_options)
  if valid_options
    answer = get_stdin('#{message} #{valid_options.to_s.gsub(/'/, '').gsub(/, /,'/')} ') while !valid_options.include?(answer)
  else
    answer = get_stdin(message)
  end
  answer
end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end
    
        def poster
      'poster='#{@poster}'' if @poster
    end
    
        def unlink_files(files)
      Array(files).each do |file|
        file.close unless file.closed?
        file.unlink if file.respond_to?(:unlink) && file.path.present? && File.exist?(file.path)
      end
    end
    
        def self.register(klass, attachment_name, attachment_options)
      instance.register(klass, attachment_name, attachment_options)
    end
    
      context 'called with one color' do
    it 'applies same width to all sides' do
      rule = 'border-width: 1px'
    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end

    
          expect('.size-implicit').to have_ruleset(rule)
    end
  end