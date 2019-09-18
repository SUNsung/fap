
        
          # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          def remember_me!
        self.remember_token ||= self.class.remember_token if respond_to?(:remember_token)
        self.remember_created_at ||= Time.now.utc
        save(validate: false) if self.changed?
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
    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def pane_index
      index + tab.project.pane_base_index
    end
    
            expect(project.startup_pane).to eq('sample:0.4')
      end
    end
  end
    
        def list
      say 'tmuxinator projects:'
      if options[:newline]
        say Tmuxinator::Config.configs.join('\n')
      else
        print_in_columns Tmuxinator::Config.configs
      end
    end
    
        context 'when a project config file is provided' do
      it 'should raise if the project config file can't be found' do
        project_config = 'dont-exist.yml'
        regex = /Project config \(#{project_config}\) doesn't exist\./
        expect do
          described_class.validate(project_config: project_config)
        end.to raise_error RuntimeError, regex
      end