
        
          find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
          # @param [String] query the regular expression string to validate
      #
      # @raise if the query is not a valid regular expression
      #
      def validate_regex!(query)
        /#{query}/
      rescue RegexpError
        help! 'A valid regular expression is required.'
      end
    
            def self.options
          [
            ['--regex', 'Interpret the `QUERY` as a regular expression'],
            ['--show-all', 'Pick from all versions of the given podspec'],
          ].concat(super)
        end
    
    Then(/doesn't contain '([^']*)' in the output/) do |expected|
  expect(@output).not_to include(expected)
end
    
        def name
      'cap'
    end