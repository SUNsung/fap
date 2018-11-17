
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
    #
    
              reload_file = File.join(Serve.singleton_class::LIVERELOAD_DIR, 'livereload.js')
    
            def convert(content)
          document = Kramdown::Document.new(content, @config)
          html_output = document.to_html
          if @config['show_warnings']
            document.warnings.each do |warning|
              Jekyll.logger.warn 'Kramdown warning:', warning
            end
          end
          html_output
        end
    
          def is_edit_page
        false
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def base_url
        @base_url
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
    
      test 'creates korean page which contains korean content' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
      # piece file back together and write
  manifest = '  s.files = %w[\n#{files}\n  ]\n'
  spec = [head, manifest, tail].join('  # = MANIFEST =\n')
  File.open(gemspec_file, 'w') { |io| io.write(spec) }
  puts 'Updated #{gemspec_file}'
end
    
    $:.unshift File.join(File.dirname(__FILE__), *%w[.. lib])