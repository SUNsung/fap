
        
                if !file
          max_file_size_kb = [SiteSetting.max_image_size_kb, SiteSetting.max_attachment_size_kb].max.kilobytes
          url = Discourse.store.cdn_url(upload.url)
          url = SiteSetting.scheme + ':' + url if url =~ /^\/\//
          file = FileHelper.download(
            url,
            max_file_size: max_file_size_kb,
            tmp_file_name: 'discourse-download',
            follow_redirect: true
          )
          cache_file(file, filename)
          file = get_from_cache(filename)
        end
    
        context 'with a category restriction' do
      fab!(:category) { Fabricate(:category, read_restricted: true) }
      let(:topic) { Fabricate(:topic, category: category) }
      let(:post) { Fabricate(:post, topic: topic) }
      fab!(:moderator) { Fabricate(:moderator) }
      fab!(:admin) { Fabricate(:admin) }
    
        def initialize(opts = {})
      s3_options = S3Helper.s3_options(SiteSetting)
      s3_options.merge!(opts[:s3_options]) if opts[:s3_options]
      @s3_helper = S3Helper.new(s3_bucket_name_with_prefix, '', s3_options)
    end
    
        describe '#store_upload' do
      let(:s3_client) { Aws::S3::Client.new(stub_responses: true) }
      let(:s3_helper) { S3Helper.new(SiteSetting.s3_upload_bucket, '', client: s3_client) }
      let(:store) { FileStore::S3Store.new(s3_helper) }
    
    end

    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
        if last_request_at.is_a? Integer
      last_request_at = Time.at(last_request_at).utc
    elsif last_request_at.is_a? String
      last_request_at = Time.parse(last_request_at)
    end
    
              include mod
        end
    
          # A callback initiated after successfully being remembered. This can be
      # used to insert your own logic that is only run after the user is
      # remembered.
      #
      # Example:
      #
      #   def after_remembered
      #     self.update_attribute(:invite_code, nil)
      #   end
      #
      def after_remembered
      end
    
        args.present?
  end
end

    
          # For OS::Mac::Version compatability
      def requires_nehalem_cpu?
        Hardware.oldest_cpu(self) == :nehalem
      end
      # https://en.wikipedia.org/wiki/Nehalem_(microarchitecture)
      # Ensure any extra methods are also added to version/null.rb
      alias requires_sse4? requires_nehalem_cpu?
      alias requires_sse41? requires_nehalem_cpu?
      alias requires_sse42? requires_nehalem_cpu?
      alias requires_popcnt? requires_nehalem_cpu?
    end
  end
end

    
      describe '#cached_location' do
    subject { described_class.new(url, name, version, **specs).cached_location }
    
          if valid.count >= fetch(:keep_releases)
        info t(:keeping_releases, host: host.to_s, keep_releases: fetch(:keep_releases), releases: valid.count)
        directories = (valid - valid.last(fetch(:keep_releases))).map do |release|
          releases_path.join(release).to_s
        end
        if test('[ -d #{current_path} ]')
          current_release = capture(:readlink, current_path).to_s
          if directories.include?(current_release)
            warn t(:wont_delete_current_release, host: host.to_s)
            directories.delete(current_release)
          end
        else
          debug t(:no_current_release, host: host.to_s)
        end
        if directories.any?
          execute :rm, '-rf', *directories
        else
          info t(:no_old_releases, host: host.to_s, keep_releases: fetch(:keep_releases))
        end
      end
    end
  end
    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
          def assert_value_or_block_not_both(value, block)
        return if value.nil? || block.nil?
        raise Capistrano::ValidationError,
              'Value and block both passed to Configuration#set'
      end
    
          def contained_by_multiline_collection_that_could_be_broken_up?(node)
        node.each_ancestor.find do |ancestor|
          if ancestor.hash_type? || ancestor.array_type?
            if breakable_collection?(ancestor, ancestor.children)
              return children_could_be_broken_up?(ancestor.children)
            end
          end
    
            def remove_incorrect_closing_paren(node, corrector)
          corrector.remove(
            range_between(
              incorrect_parenthesis_removal_begin(node),
              incorrect_parenthesis_removal_end(node)
            )
          )
        end
    
          it 'ignores that since modifying the name changes the method interface' do
        expect(corrected_source).to eq(source)
      end
    end
    
        # Remove old files so that the cache doesn't grow too big. When the
    # threshold MaxFilesInCache has been exceeded, the oldest 50% of all the
    # files in the cache are removed. The reason for removing so much is that
    # cleaning should be done relatively seldom, since there is a slight risk
    # that some other RuboCop process was just about to read the file, when
    # there's parallel execution and the cache is shared.
    def self.cleanup(config_store, verbose, cache_root = nil)
      return if inhibit_cleanup # OPTIMIZE: For faster testing
    
            def check_space(space_begin_pos, space_end_pos, range, msg, node = nil)
          return if space_begin_pos != space_end_pos
    
              if node.modifier_form? && last_argument_is_heredoc?(node)
            heredoc_node = last_argument(node)
    
      it 'registers an offense for guard clause not followed by empty line' \
     'when guard clause including heredoc' do
    expect_offense(<<~RUBY)
      def method
        if truthy
          raise <<-MSG
            This is an error.
          MSG
        end
        ^^^ Add empty line after guard clause.
        value
      end
    RUBY
  end
    
      describe 'PUT /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
      # Who maintains this package? This could be the upstream author
  # or the package maintainer. You pick.
  attr_accessor :maintainer
    
        File.write('#{base_path}/.PKGINFO', pkginfo)
  end
    
        # npm installs dependencies in the module itself, so if you do
    # 'npm install express' it installs dependencies (like 'connect')
    # to: node_modules/express/node_modules/connect/...
    #
    # To that end, I don't think we necessarily need to include
    # any automatic dependency information since every 'npm install'
    # is fully self-contained. That's why you don't see any bother, yet,
    # to include the package's dependencies in here.
    #
    # It's possible someone will want to decouple that in the future,
    # but I will wait for that feature request.
  end
    
      # Take a flat package as input
  def input(input_path)
    # TODO: Fail if it's a Distribution pkg or old-fashioned
    expand_dir = File.join(build_path, 'expand')
    # expand_dir must not already exist for pkgutil --expand
    safesystem('pkgutil --expand #{input_path} #{expand_dir}')
    
        # Evaluate dependencies.
    if !attributes[:no_auto_depends?]
	    pkgdepend_gen = safesystemout('pkgdepend', 'generate',  '-md', '#{staging_path}',  manifest_fn)
      File.write(build_path('#{name}.p5m.3'), pkgdepend_gen)
    
      def architecture
    case @architecture
      when nil
        return %x{uname -m}.chomp   # default to current arch
      when 'amd64' # debian and pacman disagree on architecture names
        return 'x86_64'
      when 'native'
        return %x{uname -m}.chomp   # 'native' is current arch
      when 'all', 'any', 'noarch'
        return 'any'
      else
        return @architecture
    end
  end # def architecture
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
          # Capture the output, which will be JSON metadata describing this python
      # package. See fpm/lib/fpm/package/pyfpm/get_metadata.py for more
      # details.
      logger.info('fetching package metadata', :setup_cmd => setup_cmd)