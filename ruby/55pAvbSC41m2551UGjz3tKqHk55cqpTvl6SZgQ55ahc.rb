
        
            context 'on a post from a contact' do
      before do
        aspect_to_post = bob.aspects.where(:name => 'generic').first
        @post = bob.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
            it 'doesn\'t allow the user to reshare the post again' do
          post_request!
          expect(response.code).to eq('422')
          expect(response.body).to eq(I18n.t('reshares.create.error'))
        end
      end
    
      before do
    @request.env['devise.mapping'] = Devise.mappings[:user]
    @user = alice
    @user.password = 'evankorth'
    @user.password_confirmation = 'evankorth'
    @user.save
  end
    
            self
      end
    
              ignored_end_pos = if ignored_loc.respond_to?(:heredoc_body)
                              ignored_loc.heredoc_end.end_pos
                            else
                              ignored_loc.expression.end_pos
                            end
          ignored_end_pos >= node.source_range.end_pos
        end
      end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
    
    
      config.vm.define 'arch' do |arch|
    arch.vm.box = 'jfredett/arch-puppet'
  end
    
    # Add our files (should be in the current directory):
package.input('my-executable=/usr/bin/')
package.input('my-library.so=/usr/lib/')
    
        def validate
      # Make sure the user has passed '-s' and '-t' flags
      mandatory(@command.input_type,
                'Missing required -s flag. What package source did you want?')
      mandatory(@command.output_type,
                'Missing required -t flag. What package output did you want?')
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
        opts[:process] = false unless opts.include?(:process)
    opts[:stdin]   = true  unless opts.include?(:stdin)
    opts[:stdout]  = true  unless opts.include?(:stdout)
    opts[:stderr]  = true  unless opts.include?(:stderr)
    
      let(:wemux_project) { FactoryBot.build(:wemux_project) }
  let(:noname_project) { FactoryBot.build(:noname_project) }
  let(:noroot_project) { FactoryBot.build(:noroot_project) }
  let(:nameless_window_project) do
    FactoryBot.build(:nameless_window_project)
  end
    
          def default_path_option
        version && version < 1.8 ? 'default-path' : '-c'
      end
    
        context 'synchronization disabled' do
      let(:synchronize) { false }