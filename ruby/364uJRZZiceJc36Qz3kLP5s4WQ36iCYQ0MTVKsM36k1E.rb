  subject(:finder) { described_class.new(project, 'files/', '.html', categories) }
    
      sidekiq_options retry: 3
    
          context 'and user can update_project_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :update_project_member, presenter).and_return(true)
        end
    
      it 'calls Gitlab::Diff::File#unfold_diff_lines with correct position' do
    position = instance_double(Gitlab::Diff::Position, file_path: 'README')
    readme_file = instance_double(Gitlab::Diff::File, file_path: 'README')
    other_file = instance_double(Gitlab::Diff::File, file_path: 'foo.rb')
    nil_path_file = instance_double(Gitlab::Diff::File, file_path: nil)
    
            css('.entry-detail[id$='instance-method']').each do |node|
          name = node.at_css('.signature > strong').content.strip
          name.prepend '#{self.name}#' unless slug.end_with?('toplevel')
          id = node['id'] = node['id'].remove(/<.+?>/)
          entries << [name, id] unless entries.last && entries.last[0] == name
        end
    
        def merge(hash)
      return super unless hash.is_a? Hash
      dup.merge!(hash)
    end
    
            root_page? ? root : other
        doc
      end
    
          it 'should return false' do
        expect(subject.rsync_chown_support?(machine)).to be_falsey
      end
    end
    
        let(:cmd) { 'find /vagrant -path /vagrant/.vagrant -prune -o '!' -type l -a '(' ! -user vagrant -or ! -group vagrant ')' -exec chown vagrant:vagrant '{}' +' }
    let(:no_exclude_cmd) { 'find /vagrant '!' -type l -a '(' ! -user vagrant -or ! -group vagrant ')' -exec chown vagrant:vagrant '{}' +' }
    
        it 'should not set the update parameter' do
      expect(subject).to receive(:internal_install) do |info, update, opts|
        expect(update).to be_nil
      end
      subject.install_local(plugin_path)
    end
    
            def create(params, **opts, &block)
          # NOTE: Use the direct machine name as we don't
          # need to worry about uniqueness with compose
          name    = machine.name.to_s
          image   = params.fetch(:image)
          links   = Array(params.fetch(:links, [])).map do |link|
            case link
            when Array
              link
            else
              link.to_s.split(':')
            end
          end
          ports   = Array(params[:ports])
          volumes = Array(params[:volumes]).map do |v|
            v = v.to_s
            host, guest = v.split(':', 2)
            if v.include?(':') && (Vagrant::Util::Platform.windows? || Vagrant::Util::Platform.wsl?)
              host = Vagrant::Util::Platform.windows_path(host)
              # NOTE: Docker does not support UNC style paths (which also
              # means that there's no long path support). Hopefully this
              # will be fixed someday and the gsub below can be removed.
              host.gsub!(/^[^A-Za-z]+/, '')
            end
            # if host path is a volume key, don't expand it.
            # if both exist (a path and a key) show warning and move on
            # otherwise assume it's a realative path and expand the host path
            compose_config = get_composition
            if compose_config['volumes'] && compose_config['volumes'].keys.include?(host)
              if File.directory?(@machine.env.cwd.join(host).to_s)
                @machine.env.ui.warn(I18n.t('docker_provider.volume_path_not_expanded',
                                           host: host))
              end
            else
              @logger.debug('Path expanding #{host} to current Vagrant working dir instead of docker-compose config file directory')
              host = @machine.env.cwd.join(host).to_s
            end
            '#{host}:#{guest}'
          end
          cmd     = Array(params.fetch(:cmd))
          env     = Hash[*params.fetch(:env).flatten.map(&:to_s)]
          expose  = Array(params[:expose])
          @logger.debug('Creating container `#{name}`')
          begin
            update_args = [:apply]
            update_args.push(:detach) if params[:detach]
            update_args << block
            update_composition(*update_args) do |composition|
              services = composition['services'] ||= {}
              services[name] ||= {}
              if params[:extra_args].is_a?(Hash)
                services[name].merge!(
                  Hash[
                    params[:extra_args].map{ |k, v|
                      [k.to_s, v]
                    }
                  ]
                )
              end
              services[name].merge!(
                'environment' => env,
                'expose' => expose,
                'ports' => ports,
                'volumes' => volumes,
                'links' => links,
                'command' => cmd
              )
              services[name]['image'] = image if image
              services[name]['hostname'] = params[:hostname] if params[:hostname]
              services[name]['privileged'] = true if params[:privileged]
              services[name]['pty'] = true if params[:pty]
            end
          rescue => error
            @logger.error('Failed to create container `#{name}`: #{error.class} - #{error}')
            update_composition do |composition|
              composition['services'].delete(name)
            end
            raise
          end
          get_container_id(name)
        end
    
      def processed?
    redis.exists('move_in_progress:#{@account.id}')
  end
    
        old_account.update!(uri: 'https://example.org/alice', domain: 'example.org', protocol: :activitypub, inbox_url: 'https://example.org/inbox')
    new_account.update!(uri: 'https://example.com/alice', domain: 'example.com', protocol: :activitypub, inbox_url: 'https://example.com/inbox', also_known_as: [old_account.uri])
    
          it 'processes payload with actor if valid signature exists' do
        payload['signature'] = { 'type' => 'RsaSignature2017' }
    
      def refresh_poll
    ActivityPub::FetchRemotePollService.new.call(@poll, current_account) if user_signed_in? && @poll.possibly_stale?
  end
end

    
            def on_send(node)
          heredoc_arg = extract_heredoc_argument(node)
          return unless heredoc_arg
    
            # Returns true if running with --auto-correct would remove the braces
        # of the last argument.
        def braces_will_be_removed?(args)
          brace_config = config.for_cop('Style/BracesAroundHashParameters')
          return false unless brace_config.fetch('Enabled')
          return false if brace_config['AutoCorrect'] == false
    
          def on_send(node)
        rhs = extract_rhs(node)
    
            def check_space_style_inside_pipes(args, opening_pipe, closing_pipe)
          check_opening_pipe_space(args, opening_pipe)
          check_closing_pipe_space(args, closing_pipe)
        end
    
      it 'registers an offense for guard clause not followed by empty line' do
    expect_offense(<<~RUBY)
      def foo
        return if need_return?
        ^^^^^^^^^^^^^^^^^^^^^^ Add empty line after guard clause.
        foobar
      end
    RUBY
  end