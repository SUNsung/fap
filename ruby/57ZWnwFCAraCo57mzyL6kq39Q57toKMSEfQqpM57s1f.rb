
        
              # Converts the array to a comma-separated sentence where the last element is
      # joined by the connector word. This is the html_safe-aware version of
      # ActiveSupport's {Array#to_sentence}[http://api.rubyonrails.org/classes/Array.html#method-i-to_sentence].
      #
      def to_sentence(array, options = {})
        options.assert_valid_keys(:words_connector, :two_words_connector, :last_word_connector, :locale)
    
              def retrieve_object(object)
            if object
              object
            elsif @template_object.instance_variable_defined?('@#{@object_name}')
              @template_object.instance_variable_get('@#{@object_name}')
            end
          rescue NameError
            # As @object_name may contain the nested syntax (item[subobject]) we need to fallback to nil.
            nil
          end
    
                [:checked, :selected, :disabled, :readonly].each do |option|
              current_value = @options[option]
              next if current_value.nil?
    
        initializer 'action_view.form_with_generates_ids' do |app|
      ActiveSupport.on_load(:action_view) do
        form_with_generates_ids = app.config.action_view.delete(:form_with_generates_ids)
        unless form_with_generates_ids.nil?
          ActionView::Helpers::FormHelper.form_with_generates_ids = form_with_generates_ids
        end
      end
    end
    
    module Gitlab
  module BackgroundMigration
    class PopulateMergeRequestsLatestMergeRequestDiffId
      BATCH_SIZE = 1_000
    
          # token - The GitHub API token to use.
      #
      # per_page - The number of objects that should be displayed per page.
      #
      # parallel - When set to true hitting the rate limit will result in a
      #            dedicated error being raised. When set to `false` we will
      #            instead just `sleep()` until the rate limit is reset. Setting
      #            this value to `true` for parallel importing is crucial as
      #            otherwise hitting the rate limit will result in a thread
      #            being blocked in a `sleep()` call for up to an hour.
      def initialize(token, per_page: 100, parallel: true)
        @octokit = Octokit::Client.new(
          access_token: token,
          per_page: per_page,
          api_endpoint: api_endpoint
        )
    
            def sidekiq_worker_class
          ImportLfsObjectWorker
        end
    
            # Builds a diff note from a GitHub API response.
        #
        # note - An instance of `Sawyer::Resource` containing the note details.
        def self.from_api_response(note)
          matches = note.html_url.match(NOTEABLE_ID_REGEX)
    
            def issuable_type
          pull_request? ? 'MergeRequest' : 'Issue'
        end
      end
    end
  end
end

    
            # Builds a lfs_object
        def self.from_api_response(lfs_object)
          new({ oid: lfs_object[0], download_link: lfs_object[1] })
        end
    
          private
    
        post '/edit/Multibyte',
         :content => 'りんご', :header => 'みかん', :footer => 'バナナ', :sidebar => 'スイカ',
         :page    => 'Multibyte', :format => :markdown, :message => 'mesg'
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
        if File.directory?(source)
      if !File.symlink?(source)
        # Create a directory if this path is a directory
        logger.debug('Creating', :directory => destination)
        if !File.directory?(destination)
          FileUtils.mkdir(destination)
        end
      else
        # Linking symlinked directories causes a hardlink to be created, which
        # results in the source directory being wiped out during cleanup,
        # so copy the symlink.
        logger.debug('Copying symlinked directory', :source => source,
                      :destination => destination)
        FileUtils.copy_entry(source, destination)
      end
    else
      # Otherwise try copying the file.
      begin
        logger.debug('Linking', :source => source, :destination => destination)
        File.link(source, destination)
      rescue Errno::ENOENT, Errno::EXDEV, Errno::EPERM
        # Hardlink attempt failed, copy it instead
        logger.debug('Copying', :source => source, :destination => destination)
        copy_entry(source, destination)
      rescue Errno::EEXIST
        sane_path = destination.gsub(staging_path, '')
        logger.error('Cannot copy file, the destination path is probably a directory and I attempted to write a file.', :path => sane_path, :staging => staging_path)
      end
    end
    
      def to_s(format=nil)
    return super(format.nil? ? 'NAME-FULLVERSION.EXTENSION' : format)
  end # def to_s
end # class FPM::Package::FreeBSD

    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end