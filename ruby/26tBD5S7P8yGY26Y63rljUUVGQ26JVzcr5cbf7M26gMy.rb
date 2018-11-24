
        
          Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
      describe '#pretty_jsonify' do
    it 'escapes </script> tags in the output JSON' do
      cleaned_json = Utils.pretty_jsonify(:foo => 'bar', :xss => '</script><script>alert('oh no!')</script>')
      expect(cleaned_json).not_to include('</script>')
      expect(cleaned_json).to include('<\\/script>')
    end
  end
    
      def set_statuses
    return unless page_requested?
    
        def create
      authorize ReportNote, :create?
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      def update
    if subscription.verify(body, request.headers['HTTP_X_HUB_SIGNATURE'])
      ProcessingWorker.perform_async(@account.id, body.force_encoding('UTF-8'))
    end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
          @options = options.merge(:_convert => true)
      # Backwards compatibility
      @options[:old] = true if @options[:alternate] == false
      @template = template
      @checked_encoding = false
    end
    
        # Modify the top Sass backtrace entries
    # (that is, the most deeply nested ones)
    # to have the given attributes.
    #
    # Specifically, this goes through the backtrace entries
    # from most deeply nested to least,
    # setting the given attributes for each entry.
    # If an entry already has one of the given attributes set,
    # the pre-existing attribute takes precedence
    # and is not used for less deeply-nested entries
    # (even if they don't have that attribute set).
    #
    # @param attrs [{Symbol => Object}] The information to add to the backtrace entry.
    #   See \{#sass\_backtrace}
    def modify_backtrace(attrs)
      attrs = attrs.reject {|_k, v| v.nil?}
      # Move backwards through the backtrace
      (0...sass_backtrace.size).to_a.reverse_each do |i|
        entry = sass_backtrace[i]
        sass_backtrace[i] = attrs.merge(entry)
        attrs.reject! {|k, _v| entry.include?(k)}
        break if attrs.empty?
      end
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end