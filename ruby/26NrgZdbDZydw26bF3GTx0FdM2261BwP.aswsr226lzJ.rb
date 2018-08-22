
        
        CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        # The full path to the directory containing the collection, with
    #   optional subpaths.
    #
    # *files - (optional) any other path pieces relative to the
    #           directory to append to the path
    #
    # Returns a String containing th directory name where the collection
    #   is stored on the filesystem.
    def collection_dir(*files)
      return directory if files.empty?
      site.in_source_dir(container, relative_directory, *files)
    end
    
            # Private: Watch for file changes and rebuild the site.
        #
        # site - A Jekyll::Site instance
        # options - A Hash of options passed to the command
        #
        # Returns nothing.
        def watch(site, options)
          # Warn Windows users that they might need to upgrade.
          if Utils::Platforms.bash_on_windows?
            Jekyll.logger.warn '',
                               'Auto-regeneration may not work on some Windows versions.'
            Jekyll.logger.warn '',
                               'Please see: https://github.com/Microsoft/BashOnWindows/issues/216'
            Jekyll.logger.warn '',
                               'If it does not work, please upgrade Bash on Windows or '\
                               'run Jekyll with --no-watch.'
          end
    
            def bundle_install(path)
          Jekyll.logger.info 'Running bundle install in #{path.cyan}...'
          Dir.chdir(path) do
            exe = Gem.bin_path('bundler', 'bundle')
            process, output = Jekyll::Utils::Exec.run('ruby', exe, 'install')
    
    require 'webrick'
    
      # Asynchronously send an email
  class TestEmail < Jobs::Base
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
        def form_configurable_fields
      self._form_configurable_fields
    end
    
        respond_to do |format|
      format.html
      format.json {
        send_data Utils.pretty_jsonify(@user_credentials.limit(nil).as_json), disposition: 'attachment'
      }
    end
  end
    
      def test_commandline
    commandline = 'echo quux\n'
    Open3.popen3(commandline) {|i,o,e,t|
      assert_equal('quux\n', o.read)
    }
  end
    
      ##
  # Creates a new directory in the tar file +name+ with +mode+
    
      def test_download_local_space
    space_path = File.join @tempdir, 'space path'
    FileUtils.mkdir space_path
    FileUtils.mv @a1_gem, space_path
    local_path = File.join space_path, @a1.file_name
    inst = nil
    
          def each # :yields: [user, password]
        @passwd.keys.sort.each{|user|
          yield([user, @passwd[user]])
        }
      end
    end
  end
end

    
      def test_sized_queue_one_closed_interrupt
    q = SizedQueue.new 1
    q << :one
    t1 = Thread.new { q << :two }
    sleep 0.01 until t1.stop?
    q.close
    
        def parse(uri) # :nodoc:
      scheme, userinfo, host, port,
        registry, path, opaque, query, fragment = self.split(uri)
      scheme_list = URI.scheme_list
      if scheme && scheme_list.include?(uc = scheme.upcase)
        scheme_list[uc].new(scheme, userinfo, host, port,
                            registry, path, opaque, query,
                            fragment, self)
      else
        Generic.new(scheme, userinfo, host, port,
                    registry, path, opaque, query,
                    fragment, self)
      end
    end
    
      def login!
    print 'GitHub User: '
    ENV['HOMEBREW_GITHUB_API_USERNAME'] = $stdin.gets.chomp
    print 'Password: '
    ENV['HOMEBREW_GITHUB_API_PASSWORD'] = noecho_gets.chomp
    puts
  end
    
      #forward some requests to status message, because a poll is just attached to a status message and is not sharable itself
  delegate :author_id, :diaspora_handle, :public?, :subscribers, to: :status_message
    
          def save_request_parameters
        session[:client_id] = @o_auth_application.client_id
        session[:response_type] = @response_type
        session[:redirect_uri] = @redirect_uri
        session[:scopes] = scopes_as_space_seperated_values
        session[:state] = params[:state]
        session[:nonce] = params[:nonce]
      end