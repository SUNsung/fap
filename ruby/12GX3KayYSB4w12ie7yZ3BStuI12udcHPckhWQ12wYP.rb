
        
            context 'while processing' do
      setup do
        clear_dest
        @site.config['title'] = 'Test Site'
        @page = setup_page('physical.html', :base => test_dir('fixtures'))
      end
    
    def dest_dir(*subdirs)
  test_dir('dest', *subdirs)
end
    
        def filter(entries)
      entries.reject do |e|
        unless included?(e)
          special?(e) || backup?(e) || excluded?(e) || symlink?(e)
        end
      end
    end
    
    If you run into trouble, you can find helpful resources at https://jekyllrb.com/help/!
            MSG
            raise Jekyll::Errors::MissingDependencyException, name
          end
        end
      end
    end
  end
end

    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    def list_login_items_for_app(app_path)
  out, err, status = Open3.capture3(
    '/usr/bin/osascript', '-e',
    'tell application \'System Events\' to get the name of every login item ' \
    'whose path contains \'#{File.basename(app_path)}\''
  )
  if status.exitstatus > 0
    $stderr.puts err
    exit status.exitstatus
  end
  puts out.gsub(', ', '\n')
end