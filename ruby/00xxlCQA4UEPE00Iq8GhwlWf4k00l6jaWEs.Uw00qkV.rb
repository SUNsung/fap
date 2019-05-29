
        
            subdirs = Dir.chdir(SimpleCov.root) { Dir.glob('*') }
                 .reject { |d| d.end_with?('.rb') || ['test', 'vendor'].include?(d) }
                 .map { |d| '#{d}/**/*.rb' }.join(',')
    
    module URI
  ;
  class << self
# Does the char code correspond to an alpha-numeric char.
# isAlphaNumeric('a'.ord) => true
# isAlphaNumeric(''.ord) => false
    def isAlphaNumeric(cc)
      # a - z
      if (97 <= cc && cc <= 122);
        return true
      end
      # A - Z
      if (65 <= cc && cc <= 90);
        return true
      end
      # 0 - 9
      if (48 <= cc && cc <= 57);
        return true
      end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
          def title
        '#{@page.title}'
      end
    
          # Access to embedded metadata.
      #
      # Examples
      #
      #   {{#metadata}}{{name}}{{/metadata}}
      #
      # Returns Hash.
      def metadata
        @page.metadata
      end
    
      test 'show revision of specific file' do
    shas = {}
      ['First revision of testfile', 'Second revision of testfile'].each do |content|
        new_commit = commit_test_file(@wiki, 'revisions', 'testfile', 'log', content)
        shas[new_commit] = content
      end
      shas.each do |sha, content|
        get 'revisions/testfile.log/#{sha}'
        assert last_response.ok?
        assert_match /#{content}/, last_response.body
      end
  end
    
    context 'Frontend Unicode support' do
  include Rack::Test::Methods
    
    desc 'Update version number and gemspec'
task :bump do
  puts 'Updated version to #{bump_version}'
  # Execute does not invoke dependencies.
  # Manually invoke gemspec then validate.
  Rake::Task[:gemspec].execute
  Rake::Task[:validate].execute
end
    
      end
end

    
      let(:order1) do
    create :order_with_line_items,
           created_at: 1.day.from_now,
           completed_at: 1.day.from_now,
           considered_risky: true,
           number: 'R100'
  end
    
                within_row(1) { click_icon 'split' }
            targetted_select2 stock_location2.name, from: '#s2id_item_stock_location'
            fill_in 'item_quantity', with: 5
            click_icon :save
    
            self.line_item_options = []