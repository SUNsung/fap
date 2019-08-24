
        
                  # The key is untrusted input, so ensure we can't be directed outside
          # of base_dir inside the repository
          Gitlab::Utils.check_path_traversal!(file_name)
    
      def notification_service
    @notification_service ||= NotificationService.new
  end
end

    
        def find_by_filename(query)
      search_filenames(query).map do |filename|
        Gitlab::Search::FoundBlob.new(blob_filename: filename, project: project, ref: ref, repository: repository)
      end
    end
    
        subject.unfold_diff_files([position])
  end
end

    
            desc 'Denies an access request for the given user.' do
          detail 'This feature was introduced in GitLab 8.11.'
        end
        params do
          requires :user_id, type: Integer, desc: 'The user ID of the access requester'
        end
        # rubocop: disable CodeReuse/ActiveRecord
        delete ':id/access_requests/:user_id' do
          source = find_source(source_type, params[:id])
          member = source.requesters.find_by!(user_id: params[:user_id])
    
        alias log puts
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
          def formats
        super(:markdown)
      end
    
          def title
        'Latest Changes (Globally)'
      end
    
        # ascii only file names prevent UTF8 issues
    # when using git repos across operating systems
    # as this test demonstrates, translation is not
    # great
    assert_equal 'm-plus-F', 'μ†ℱ'.to_url
  end
    
    #required to upload bigger binary files
Gollum::set_git_timeout(120)
Gollum::set_git_max_filesize(190 * 10**6)
    
          # @param type [Symbol]
      # @param key [Symbol]
      # @param value [Object] will be stored if the value is currently empty
      # @return either the old value, if it wasn't nil, or the given value
      def get_or_set(type, key, value)
        setting = inheritable_setting.send(type)
        if value.nil?
          setting[key]
        else
          setting[key] = value
        end
      end