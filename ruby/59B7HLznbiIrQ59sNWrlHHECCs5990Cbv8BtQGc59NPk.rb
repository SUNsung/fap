
        
              it 'adds docs_section_title param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docs_section_title: 'Section title'
          )
        end').runner.execute(:test)
    
          @key = key
      @env_name = env_name
      @description = description
      @short_option = short_option
      @default_value = default_value
      @default_value_dynamic = default_value_dynamic
      @verify_block = verify_block
      @is_string = is_string
      @data_type = type
      @data_type = String if type == :shell_string
      @optional = optional
      @conflicting_options = conflicting_options
      @conflict_block = conflict_block
      @deprecated = deprecated
      @sensitive = sensitive
      @code_gen_sensitive = code_gen_sensitive || sensitive
      @allow_shell_conversion = (type == :shell_string)
      @display_in_shell = display_in_shell
      @skip_type_validation = skip_type_validation # sometimes we allow multiple types which causes type validation failures, e.g.: export_options in gym
    
            FastlaneCore::CertChecker.installed_identies
      end
    end
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
    def testpath(path)
  File.join(TEST_DIR, path)
end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, false
    
      s.authors  = ['Tom Preston-Werner', 'Rick Olson']
  s.email    = 'tom@github.com'
  s.homepage = 'http://github.com/gollum/gollum'
    
          click_link 'Completed At'
    
          within_row(2) { click_icon :split }
      targetted_select2 'LA(#{order.reload.shipments.last.number})', from: '#s2id_item_stock_location'
      click_icon :save
      wait_for_ajax
      expect(page.find('#shipment_#{order.reload.shipments.last.id}')).to be_present
    end
  end
end

    
        for_each_gem do |gem_path|
      sh 'gem push '#{gem_path}''
    end
  end
end
    
              if Spree::Dependencies.cart_update_service.constantize.call(order: @order, params: line_items_attributes).success?
            @line_item.reload
            respond_with(@line_item, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
          def variant_attributes
        if @current_user_roles&.include?('admin')
          @@variant_attributes + [:cost_price]
        else
          @@variant_attributes
        end
      end
    end
  end
end
