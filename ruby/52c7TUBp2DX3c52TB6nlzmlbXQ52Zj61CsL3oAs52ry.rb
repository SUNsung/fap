
        
        module ActionView
  module Helpers
    module Tags # :nodoc:
      class DateSelect < Base # :nodoc:
        def initialize(object_name, method_name, template_object, options, html_options)
          @html_options = html_options
    
              label_tag(name_and_id['id'], content, options)
        end
    
          test 'when the layout is specified as a symbol and the method returns something besides a string/false/nil, raise an exception' do
        assert_raises(ArgumentError) { WithSymbolReturningObj.new.process(:index) }
      end
    
          alias :expire_data_after_sign_out! :expire_data_after_sign_in!
    end
  end
end

    
      # We manage the result cache ourselves and the default of 10 minutes can be
  # too low (particularly on Travis CI), causing results from some integration
  # tests to be dropped. This causes random fluctuations in test coverage.
  merge_timeout 86400
    
      # Configure public file server for tests with Cache-Control for performance.
  config.public_file_server.enabled = true
  config.public_file_server.headers = {
    'Cache-Control' => 'public, max-age=#{1.hour.to_i}'
  }
    
    def ok_failed(condition)
  if (condition)
    puts 'OK'
  else
    puts 'FAILED'
  end
end
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
        def generate(site)
      site.write_category_indexes
    end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
      def user_is_author?
    record.user_id == user.id
  end
end
