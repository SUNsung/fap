
        
                new_appendix = new_appendix.sub('.', '') if new_appendix.start_with?('.')
        major = version_match[:major].to_i
        minor = version_match[:minor].to_i || 0
        patch = version_match[:patch].to_i || 0
    
          begin
        # rubocop:disable Security/Eval
        eval(content) # this is okay in this case
        # rubocop:enable Security/Eval
    
              disabled_services_object = self.service_object
          disabled_services.each do |k, v|
            disabled_services_object.__hash__[k] = true
            disabled_services_object.send('#{k}=', v)
          end
          Produce::Service.disable(disabled_services_object, nil) unless disabled_services.empty?
        end
      end
    
      # Create a fake app with number_of_builds candidate builds
  # the builds will be in date ascending order
  def make_fake_builds(number_of_builds)
    (0...number_of_builds).map do |num|
      OpenStruct.new({ upload_date: Time.now.utc + 60 * num, processing: false }) # minutes_from_now
    end
  end
    
          def actions
        actions = []
        if Snapshot.config[:test_without_building]
          actions << 'test-without-building'
        else
          actions << :clean if Snapshot.config[:clean]
          actions << :build # https://github.com/fastlane/fastlane/issues/2581
          actions << :test
        end
        return actions
      end
    
            return ['-destination '#{value}'']
      end
    
          def self.is_supported?(platform)
        [:ios, :mac].include?(platform)
      end
    
            expect(values[:changelog]).to eq('custom changelog')
      end
    
        describe 'when asked to invite a new tester to a specific existing custom group' do
      it 'creates a new tester and adds it to the default group' do
        allow(tester_manager).to receive(:find_app_tester).and_return(fake_tester)
        allow(fake_app).to receive(:get_beta_groups).and_return([custom_tester_group])
    
            def select_directory(file_name)
          return [] unless @commit
    
        def aes256_gcm_decrypt(value)
      return unless value
    
          files = query.filter_results(files) if query.filters.any?
    
        context 'when project_member did not request an invite' do
      before do
        expect(project_member).to receive(:request?).and_return(false)
      end
    
      class_methods do
    def chronic_duration_attr_reader(virtual_attribute, source_attribute)
      define_method(virtual_attribute) do
        chronic_duration_attributes[virtual_attribute] || output_chronic_duration_attribute(source_attribute)
      end
    end
    
        def as_json
      { entries: entries_as_json, types: types_as_json }
    end
    
        private
    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            css('.nav-index-section').each do |node|
          node.content = node.content
        end
    
              if pods_by_state
            {
              :added => :added,
              :changed => :changed,
              :removed => :deleted,
              :unchanged => :unchanged,
            }.each do |state, spec_state|
              Array(pods_by_state[state]).each do |name|
                add_name(name, spec_state)
              end
            end
          end
        end
    
      Xcodeproj::PlainInformative.send(:include, CLAide::InformativeError)
    
        it 'generates a valid Info.plist file' do
      generator = Generator::InfoPlistFile.new('1.0.0', Platform.new(:ios, '6.0'))
      file = temporary_directory + 'Info.plist'
      generator.save_as(file)
      `plutil -lint #{file}`
      $?.should.be.success
    end if Executable.which('plutil')
    
        # Runs the given command, capturing the desired output.
    #
    # @param  [String] executable
    #         The binary to use.
    #
    # @param  [Array<#to_s>] command
    #         The command to send to the binary.
    #
    # @param  [Symbol] capture
    #         Whether it should raise if the command fails.
    #
    # @param  [Hash] env
    #         Environment variables to be set for the command.
    #
    # @raise  If the executable could not be located.
    #
    # @return [(String, Process::Status)]
    #         The desired captured output from the command, and the status from
    #         running the command.
    #
    def self.capture_command(executable, command, capture: :merge, env: {}, **kwargs)
      bin = which!(executable)
    
                  # We add the directory for an asset catalog, but not the items in it.
              next if path_str =~ /.*\.xcassets\/.+/i
    
          def header_hash
        {
          :Type => 'PSGroupSpecifier',
          :Title => sanitize_encoding(header_title),
          :FooterText => sanitize_encoding(header_text),
        }
      end
    
              it 'does not create an objective-c import when no umbrella header is found' do
            pod_target = stub('PodTarget', :uses_swift? => false, :should_build? => true,
                                           :product_module_name => 'ModuleName', :name => 'ModuleName',
                                           :sandbox => @sandbox, :defines_module? => false,
                                           :recursive_dependent_targets => [])
            project = stub('Project', :path => Pathname(Dir.mktmpdir(['CocoaPods-Lint-', '-#{pod_target.name}'])) + 'App.xcodeproj')
    
        alias get get_preference
    
          Spree.check_unused_translations
      if false && Spree.unused_translation_messages.any?
        puts '\nThere are unused translations within Spree:'
        puts Spree.unused_translation_messages.sort
        exit(1)
      end
    end
  end
end

    
        context 'stock should not restock' do
      context 'return_item is not resellable' do
        before { return_item.resellable = false }
    
            context 'includes tax adjustments if applicable' do
          let!(:tax_rate) { create(:tax_rate, zone: order.tax_zone) }
    
            def prepare_event
          return unless @event = params[:fire]
    
            def update
          authorize! params[:action], @payment
          if !@payment.editable?
            render 'update_forbidden', status: 403
          elsif @payment.update(payment_params)
            respond_with(@payment, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
              Spree::Dependencies.cart_add_item_service.constantize.call(order: @shipment.order,
                                                                     variant: variant,
                                                                     quantity: quantity,
                                                                     options: { shipment: @shipment })