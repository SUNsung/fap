
        
              expect(agent.controllers).to eq([bob_scheduler_agent])
    end
  end
    
        it 'interpolates jsonpath expressions between matching <>'s' do
      expect(Utils.interpolate_jsonpaths('hello <$.there.world> this <escape works>', payload)).to eq('hello WORLD this should+work')
    end
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
        reversible(&method(:up_down))
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        it 'returns an array of likes for a post' do
      bob.like!(@message)
      get :index, params: {post_id: @message.id}
      expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@message.likes.map(&:id))
    end
    
          code = InvitationCode.create(user: bob)
      code.update_attributes(count: 0)
    
          def built_in_scm_plugin_class_name
        'Capistrano::SCM::#{scm_name.to_s.capitalize}'
      end
    
            def to_h
          @properties
        end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
    describe 'Orders Listing', type: :feature do
  stub_authorization!
    
              @line_item = Spree::Dependencies.cart_add_item_service.constantize.call(order: order,
                                                                                  variant: variant,
                                                                                  quantity: params[:line_item][:quantity],
                                                                                  options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
        Zlib::GzipWriter.open(temp_bpath) do |target_writer|
      open(bpath, 'rb') do |file|
        until(file.eof?())
          target_writer.write(file.read(4096))
        end
      end
    end
    
        # Write +COMPACT_MANIFEST, without the 'files' section.
    File.open(staging_path('+COMPACT_MANIFEST'), 'w+') do |file|
      file.write(pkgdata.to_json + '\n')
    end
    
        # Query details about our now-installed package.
    # We do this by using 'npm ls' with json + long enabled to query details
    # about the installed package.
    npm_ls_out = safesystemout(attributes[:npm_bin], 'ls', '--json', '--long', *npm_flags)
    npm_ls = JSON.parse(npm_ls_out)
    name, info = npm_ls['dependencies'].first
    
      option '--optional-depends', 'PACKAGE',
    'Add an optional dependency to the pacman package.', :multivalued => true
    
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