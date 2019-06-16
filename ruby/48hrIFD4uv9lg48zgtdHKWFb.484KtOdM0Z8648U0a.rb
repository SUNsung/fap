
        
              def self.category
        :source_control
      end
    
          it 'adds publish_docset param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            publish_docset: true
          )
        end').runner.execute(:test)
    
          it 'sets the platform to iOS' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'iOS'
            )
          end').runner.execute(:test)
    
          it 'handles no extension or extensions parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
        def help_default_value
      return '#{self.default_value} *'.strip if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '''' if self.default_value.instance_of?(String) && self.default_value.empty?
      return ':#{self.default_value}' if self.default_value.instance_of?(Symbol)
    
          it 'splits correctly' do
        expected = [
          'One',
          'Two',
          'Three',
          'Four Token',
          'Or',
          'Newlines',
          'Everywhere'
        ]
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
  end
end

    
          tests.each do |code, result|
        if colorize_code_supported?
          actual = with_term { IRB::Color.colorize_code(code, complete: true) }
          assert_equal(result, actual, 'Case: colorize_code(#{code.dump}, complete: true)\nResult: #{humanized_literal(actual)}')
    
          def pretty_print(q)
        q.group(2, '#<#{self.class}:', '>') {
          q.breakable
          q.text('#{event}@#{pos[0]}:#{pos[1]}')
          q.breakable
          q.text('token: ')
          tok.pretty_print(q)
          if message
            q.breakable
            q.text('message: ')
            q.text(message)
          end
        }
      end
    
      # Highlight code that triggered database queries in logs.
  config.active_record.verbose_query_logs = true