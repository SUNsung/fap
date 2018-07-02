
        
          test 'sign in should not authenticate if not using proper authentication keys' do
    swap Devise, authentication_keys: [:username] do
      sign_in_as_user
      refute warden.authenticated?(:user)
    end
  end
    
            if Devise.activerecord51?
          def postpone_email_change?
            postpone = self.class.reconfirmable &&
              will_save_change_to_email? &&
              !@bypass_confirmation_postpone &&
              self.email.present? &&
              (!@skip_reconfirmation_in_callback || !self.email_in_database.nil?)
            @bypass_confirmation_postpone = false
            postpone
          end
        else
          def postpone_email_change?
            postpone = self.class.reconfirmable &&
              email_changed? &&
              !@bypass_confirmation_postpone &&
              self.email.present? &&
              (!@skip_reconfirmation_in_callback || !self.email_was.nil?)
            @bypass_confirmation_postpone = false
            postpone
          end
        end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        # Initializes a new CategoryFeed.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'atom.xml'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_includes/custom'), 'category_feed.xml')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end
    
            private
    
      # DELETE /books/1
  # DELETE /books/1.json
  def destroy
    @book.destroy
    respond_to do |format|
      format.html { redirect_to books_url, notice: 'Book was successfully destroyed.' }
      format.json { head :no_content }
    end
  end
    
            def multiple_assignment_node
          grandparent_node = node.parent ? node.parent.parent : nil
          return nil unless grandparent_node
          return nil unless grandparent_node.type == MULTIPLE_ASSIGNMENT_TYPE
          return nil unless node.parent.type == MULTIPLE_LEFT_HAND_SIDE_TYPE
          grandparent_node
        end
      end
    end
  end
end

    
              expect(new_source)
            .to eq('#{prefix}#{open}#{a}, # a\n#{b},#{close} # b\n#{suffix}')
        end
      end
    end
  end
end
