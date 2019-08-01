
        
          context 'generating limited posts' do
    setup do
      clear_dest
      @site = fixture_site('limit_posts' => 5)
      @site.process
      @index = File.read(dest_dir('index.html'))
    end
    
        context 'when a custom highlighter is chosen' do
      should 'use the chosen highlighter if it's available' do
        override = {
          'highlighter' => nil,
          'markdown'    => 'kramdown',
          'kramdown'    => {
            'syntax_highlighter' => :coderay,
          },
        }
    
    def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
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
    
      def create_template!(name_with_category)
    full_path = File.join(base_dir, name_with_category)
    FileUtils.mkdir_p(File.dirname(full_path))
    FileUtils.touch(full_path)
  end
    
              # We need to build up mapping of directories that are enclosed
          # within each other because the exports file has to have subdirectories
          # of an exported directory on the same line. e.g.:
          #
          #   '/foo' '/foo/bar' ...
          #   '/bar'
          #
          # We build up this mapping within the following hash.
          logger.debug('Compiling map of sub-directories for NFS exports...')
          dirmap = {}
          folders.sort_by { |_, opts| opts[:hostpath] }.each do |_, opts|
            hostpath = opts[:hostpath].dup
            hostpath.gsub!(''', '\'')
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        # Returns a {Machine} for the given name and provider that
    # is represented by this Vagrantfile.
    #
    # @param [Symbol] name Name of the machine.
    # @param [Symbol] provider The provider the machine should
    #   be backed by (required for provider overrides).
    # @param [BoxCollection] boxes BoxCollection to look up the
    #   box Vagrantfile.
    # @param [Pathname] data_path Path where local machine data
    #   can be stored.
    # @param [Environment] env The environment running this machine
    # @return [Machine]
    def machine(name, provider, boxes, data_path, env)
      # Load the configuration for the machine
      results = machine_config(name, provider, boxes, data_path)
      box             = results[:box]
      config          = results[:config]
      config_errors   = results[:config_errors]
      config_warnings = results[:config_warnings]
      provider_cls    = results[:provider_cls]
      provider_options = results[:provider_options]
    
        context 'with a volumes key in use for mounting' do
      let(:compose_config) { {'volumes'=>{'my_volume_key'=>'data'}} }
    
              if !boxes[name]
            raise Vagrant::Errors::BoxNotFound, name: name.to_s
          end
    
    describe Formula do
  describe '#uses_from_macos' do
    before do
      allow(OS).to receive(:mac?).and_return(false)
    end
    
        it 'allows specifying deprecated options as a Hash from an Array/String to an Array/String' do
      subject.deprecated_option(['foo1', 'foo2'] => 'bar1', 'foo3' => ['bar2', 'bar3'])
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo1', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo2', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar2'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar3'))
    end
    
        def run
      command_name, *args = detect_command_and_arguments(*@args)
      command = if help?
        args.unshift(command_name) unless command_name.nil?
        'help'
      else
        self.class.lookup_command(command_name)
      end
    
        def fetch
      downloader.fetch
      @downloaded_path = downloader.cached_location
    rescue => e
      error = CaskError.new('Download failed on Cask '#{cask}' with message: #{e}')
      error.set_backtrace e.backtrace
      raise error
    end
    
        return unless follow.account.activitypub?
    
        @inboxes = [@status.mentions, @status.reblogs, @status.preloadable_poll.votes].flat_map do |relation|
      relation.includes(:account).map do |record|
        record.account.preferred_inbox_url if !record.account.local? && record.account.activitypub?
      end
    end
    
    end
end
end
end
    
      # @return [String] containing blob for ShadowHashData in user's plist
  # @return [nil] if shadow is invalid
  def grab_shadow_blob(user)
    shadow_bytes = cmd_exec('dscl . read /Users/#{user} dsAttrTypeNative:ShadowHashData').gsub(/\s+/, '')
    return nil unless shadow_bytes.start_with? 'dsAttrTypeNative:ShadowHashData:'
    # strip the other bytes
    shadow_bytes.sub!(/^dsAttrTypeNative:ShadowHashData:/, '')
  end
    
    payload = File.binread('payload.dylib')
output_data[add_dylib, payload.size] = payload
    
    end

    
      def webcam_stop
    client.send_request(Packet.create_request('webcam_stop'))
    true
  end
    
        vprint_good 'Writing to #{net_com_opts[:target]}'
    
          explicit_plugins_specs.each do |spec|
        packet_gem.add(spec.name)
      end
    
        after :each do
      logstash.uninstall
    end
    
    desc 'Deploy website via rsync'
task :rsync do
  exclude = ''
  if File.exists?('./rsync-exclude')
    exclude = '--exclude-from '#{File.expand_path('./rsync-exclude')}''
  end
  puts '## Deploying website via Rsync'
  ok_failed system('rsync -avze 'ssh -p #{ssh_port}' #{exclude} #{rsync_args} #{'--delete' unless rsync_delete == false} #{public_dir}/ #{ssh_user}:#{document_root}')
end
    
    run SinatraStaticServer

    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        # Creates an instance of CategoryIndex for each category page, renders it, and
    # writes the output to a file.
    #
    #  +category_dir+ is the String path to the category folder.
    #  +category+     is the category currently being processed.
    def write_category_index(category_dir, category)
      index = CategoryIndex.new(self, self.source, category_dir, category)
      index.render(self.layouts, site_payload)
      index.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << index