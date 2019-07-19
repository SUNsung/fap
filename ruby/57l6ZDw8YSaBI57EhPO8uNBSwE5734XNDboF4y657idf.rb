
        
                      # Always ignore Vagrant
              ignores << /.vagrant\//
              ignores.uniq!
            end
          end
    
          # This converts an rsync exclude pattern to a regular expression
      # we can send to Listen.
      #
      # Note: Listen expects a path relative to the parameter passed into the
      # Listener, not a fully qualified path
      #
      # @param [String]  - exclude path
      # @return [Regexp] - A regex of the path, modified, to exclude
      def self.exclude_to_regexp(exclude)
        start_anchor = false
    
            subject.rsync_single(machine, ssh_info, opts)
      end
    end
    
          env[:box_url] = tf.path
      env[:box_version] = '~> 0.1'
      expect(box_collection).to receive(:add).with(any_args) { |path, name, version, **opts|
        expect(checksum(path)).to eq(checksum(box_path))
        expect(name).to eq('foo/bar')
        expect(version).to eq('0.5')
        expect(opts[:metadata_url]).to eq('file://#{tf.path}')
        true
      }.and_return(box)
    
    require Vagrant.source_root.join('plugins/provisioners/chef/cap/omnios/chef_installed')
    
          it 'does the correct update if there is an update' do
        metadata_url.open('w') do |f|
          f.write(<<-RAW)
      {
        'name': 'foo',
        'versions': [
          {
            'version': '1.0'
          },
          {
            'version': '1.8',
            'providers': [
              {
                'name': 'virtualbox',
                'url': 'bar'
              }
            ]
          },
          {
            'version': '1.10',
            'providers': [
              {
                'name': 'virtualbox',
                'url': 'bar'
              }
            ]
          },
          {
            'version': '1.11',
            'providers': [
              {
                'name': 'virtualbox',
                'url': 'bar'
              }
            ]
          }
        ]
      }
          RAW
        end
    
        def log_status(status)
      puts bold status
    end
    
        pref_hash.keys.each do |key|
      if pref_hash[key] == 'true'
        self.user_preferences.find_or_create_by(email_type: key)
      else
        block = user_preferences.find_by(email_type: key)
        if block
          block.destroy
        end
      end
    end
  end
    
      def destroy
    @aspect = current_user.aspects.where(id: params[:id]).first
    
          if @conversation = current_user.conversations.where(id: params[:id]).first
        @first_unread_message_id = @conversation.first_unread_message(current_user).try(:id)
        @conversation.set_read(current_user)
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      def destroy
    if like_service.destroy(params[:id])
      head :no_content
    else
      render plain: I18n.t('likes.destroy.error'), status: 404
    end
  end
    
      namespace :install do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build and install #{gem} as local gem'
      task gem => package(gem, '.gem') do
        sh 'gem install #{package(gem, '.gem')}'
      end
    end
    
          <% id = 1 %>
      <% frames.each do |frame| %>
          <% if frame.context_line && frame.context_line != '#' %>
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          it 'is always true' do
        expect(node.children.last.used?).to be(true)
      end
    end
    
        it { expect(class_node.is_a?(described_class)).to be(true) }
  end
    
      describe '#body' do
    context 'with a single expression body' do
      let(:source) do
        'module Foo; bar; end'
      end
    
          class << self
        attr_reader :processed_source
    
            # If there's a containing breakable collection on the same
        # line, we let that one get broken first. In a separate pass,
        # this one might get broken as well, but to avoid conflicting
        # or redundant edits, we only mark one offense at a time.
        return true if contained_by_breakable_collection_on_same_line?(node)
    
          def requires_file_removal?(file_count, config_store)
        file_count > 1 &&
          file_count > config_store.for('.').for_all_cops['MaxFilesInCache']
      end