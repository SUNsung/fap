
        
            def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
    end
    
      def set_web_push_subscription
    @web_subscription = ::Web::PushSubscription.find_by(access_token_id: doorkeeper_token.id)
  end
    
          explicit_plugins_specs.each do |spec|
        packet_gem.add(spec.name)
      end
    
        platforms.types.each do |type|
      desc 'Run acceptance test in #{type} machines'
      task type do
        ENV['LS_TEST_PLATFORM']=type
        exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/*_spec.rb']]))
      end
    end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
          # A helper class for comparing the positions of different parts of a
      # `pair` node.
      class HashElementDelta
        def initialize(first, second)
          @first = first
          @second = second
    
          dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
          def part_of_ignored_node?(node)
        ignored_nodes.map(&:loc).any? do |ignored_loc|
          if ignored_loc.expression.begin_pos > node.source_range.begin_pos
            next false
          end
    
          def preference_field_for(form, field, options)
        case options[:type]
        when :integer
          form.text_field(field, preference_field_options(options))
        when :boolean
          form.check_box(field, preference_field_options(options))
        when :string
          form.text_field(field, preference_field_options(options))
        when :password
          form.password_field(field, preference_field_options(options))
        when :text
          form.text_area(field, preference_field_options(options))
        else
          form.text_field(field, preference_field_options(options))
        end
      end
    
          # finds class for a given symbol / string
      #
      # Example :
      # :products returns Spree::Product
      # :my_products returns MyProduct if MyProduct is defined
      # :my_products returns My::Product if My::Product is defined
      # if cannot constantize it returns nil
      # This will allow us to use cancan abilities on tab
      def klass_for(name)
        model_name = name.to_s
    
          it 'can be used with search filtering' do
        click_on 'Filter'
        fill_in 'q_number_cont', with: 'R200'
        click_on 'Filter Results'
        expect(page).not_to have_content('R100')
        within_row(1) { expect(page).to have_content('R200') }
        expect(current_url).to match(/per_page\=45/)
        expect(page).to have_select('per_page', selected: '45')
        select '60', from: 'per_page'
        wait_for_ajax
        expect(page).to have_select('per_page', selected: '60')
        expect(page).to have_selector(:css, 'select.per-page-selected-60')
        expect(page).not_to have_content('R100')
        within_row(1) { expect(page).to have_content('R200') }
        expect(current_url).to match(/per_page\=60/)
      end
    end
    
              @products = @products.distinct.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@products)
        end
    
        def generate_new_liquid(link)
      Liquid::Template.register_tag('jsfiddle', JSFiddleTag)
      Liquid::Template.parse('{% jsfiddle #{link} %}')
    end
    
      def broadcast_params
    params.permit(:title, :processed_html, :type_of, :sent)
    # left out body_markdown and processed_html attributes
    #   until we decide we're using them
  end
end
