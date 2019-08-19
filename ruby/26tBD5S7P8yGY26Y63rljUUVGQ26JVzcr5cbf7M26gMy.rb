
        
            def cache_file(file, filename)
      path = get_cache_path_for(filename)
      dir = File.dirname(path)
      FileUtils.mkdir_p(dir) unless Dir.exist?(dir)
      FileUtils.cp(file.path, path)
      # keep latest 500 files
      `ls -tr #{CACHE_DIR} | head -n -#{CACHE_MAXIMUM_SIZE} | awk '$0='#{CACHE_DIR}'$0' | xargs rm -f`
    end
    
          SiteSetting.enable_s3_uploads = true
      SiteSetting.s3_upload_bucket = 's3-upload-bucket'
      SiteSetting.s3_access_key_id = 'some key'
      SiteSetting.s3_secret_access_key = 'some secret key'
    
          importer = ThemeStore::GitImporter.new(trailing_slash_url)
      importer.import!
    end
    
        @user.user_stat.save!
    
      def personal_messages
    guardian.ensure_can_tag_pms!
    allowed_user = fetch_user_from_params
    raise Discourse::NotFound if allowed_user.blank?
    raise Discourse::NotFound if current_user.id != allowed_user.id && !@guardian.is_admin?
    pm_tags = Tag.pm_tags(guardian: guardian, allowed_user: allowed_user)
    
        @s3_client.stub_responses(:put_object, -> (context) do
      check_context(context)
    
              store.remove_upload(upload)
        end
      end
    
      end
end

    
      url = ENV['URL']
  if !url
    require '#{Rails.root}/config/environment'
    url = Discourse.base_url
  end
    
      let(:categories) { { 'HTML' => 'html' } }
    
          encrypted_token = Base64.decode64(value)
      Encryptor.decrypt(AES256_GCM_OPTIONS.merge(value: encrypted_token))
    end
  end
end

    
        def find_by_filename(query)
      search_filenames(query).map do |filename|
        Gitlab::Search::FoundBlob.new(blob_filename: filename, project: project, ref: ref, repository: repository)
      end
    end
    
    shared_examples 'diff statistics' do |test_include_stats_flag: true|
  def stub_stats_find_by_path(path, stats_mock)
    expect_next_instance_of(Gitlab::Git::DiffStatsCollection) do |collection|
      allow(collection).to receive(:find_by_path).and_call_original
      expect(collection).to receive(:find_by_path).with(path).and_return(stats_mock)
    end
  end
    
      desc 'Remove and archive rolled-back release.'
  task :cleanup_rollback do
    on release_roles(:all) do
      last_release = capture(:ls, '-xt', releases_path).split.first
      last_release_path = releases_path.join(last_release)
      if test '[ `readlink #{current_path}` != #{last_release_path} ]'
        execute :tar, '-czf',
                deploy_path.join('rolled-back-release-#{last_release}.tar.gz'),
                last_release_path
        execute :rm, '-rf', last_release_path
      else
        debug 'Last release is the current release, skip cleanup_rollback.'
      end
    end
  end
    
    module Capistrano
  class Configuration
    class Servers
      include Enumerable
    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
      describe '#old_identifier' do
    let(:source) do
      'alias foo bar'
    end
    
              @processed_source = processed_source
    
          def process_args(args)
        # If there is a trailing hash arg without explicit braces, like this:
        #
        #    method(1, 'key1' => value1, 'key2' => value2)
        #
        # ...then each key/value pair is treated as a method 'argument'
        # when determining where line breaks should appear.
        if (last_arg = args.last)
          if last_arg.hash_type? && !last_arg.braces?
            args = args.concat(args.pop.children)
          end
        end
        args
      end
    
            expect(cop.messages).to eq(['Empty line missing at block body '\
                                    'beginning.',
                                    'Empty line missing at block body end.'])
      end
    
        expect(new_source).to eq(<<~RUBY)
      def foo
        raise(<<-FAIL) if true
          boop
        FAIL
    
    shared_examples_for 'a project hook' do
  let(:project) { FactoryBot.build(:project) }
    
      subject { instance }
    
          # Sorted list of all .yml files, including duplicates
      def configs
        directories.map do |directory|
          Dir['#{directory}/**/*.yml'].map do |path|
            path.gsub('#{directory}/', '').gsub('.yml', '')
          end
        end.flatten.sort
      end