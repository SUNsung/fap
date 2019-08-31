
        
                  # Prefer formula path shortcuts in strings
          formula_path_strings(body_node, :share) do |p|
            next unless match = regex_match_group(p, %r{^(/(man))/?})
    
              resource 'setuptools' do
          ^^^^^^^^^^^^^^^^^^^^^ Formulae using virtualenvs do not need a `setuptools` resource.
            url 'https://foo.com/foo.tar.gz'
            sha256 'db0904a28253cfe53e7dedc765c71596f3c53bb8a866ae50123320ec1a7b73fd'
          end
    
    class SoftwareSpec
  undef uses_from_macos
    
          expect(subject.deps.first.name).to eq('foo')
      expect(subject.deps.first.tags).to include(:head)
    end
    
          # Version string (a pretty long one) of the CLT package.
      # Note, that different ways to install the CLTs lead to different
      # version numbers.
      def version
        if @version ||= detect_version
          ::Version.new @version
        else
          ::Version::NULL
        end
      end
    
        context 'with a generalized fake user agent' do
      alias_matcher :a_string_matching, :match
    
        expect do
      described_class.run('local-transmission', 'local-caffeine')
    end.to output('#{transmission_location}\n#{caffeine_location}\n').to_stdout
  end
    
            # Displays the state of each pod.
        #
        # @return [void]
        #
        def print
          states = %i(added deleted changed unchanged)
          lines(states).each do |line|
            UI.message(line, '', 2)
          end
        end
    
      module Generator
    autoload :Acknowledgements,        'cocoapods/generator/acknowledgements'
    autoload :Markdown,                'cocoapods/generator/acknowledgements/markdown'
    autoload :Plist,                   'cocoapods/generator/acknowledgements/plist'
    autoload :BridgeSupport,           'cocoapods/generator/bridge_support'
    autoload :Constant,                'cocoapods/generator/constant'
    autoload :CopyResourcesScript,     'cocoapods/generator/copy_resources_script'
    autoload :DummySource,             'cocoapods/generator/dummy_source'
    autoload :EmbedFrameworksScript,   'cocoapods/generator/embed_frameworks_script'
    autoload :FileList,                'cocoapods/generator/file_list'
    autoload :Header,                  'cocoapods/generator/header'
    autoload :InfoPlistFile,           'cocoapods/generator/info_plist_file'
    autoload :ModuleMap,               'cocoapods/generator/module_map'
    autoload :PrefixHeader,            'cocoapods/generator/prefix_header'
    autoload :UmbrellaHeader,          'cocoapods/generator/umbrella_header'
    autoload :AppTargetHelper,         'cocoapods/generator/app_target_helper'
  end
    
          # @return [Array<Pathname>] The paths of the framework headers that come
      #         shipped with the Pod.
      #
      def vendored_frameworks_headers
        vendored_frameworks.flat_map do |framework|
          self.class.vendored_frameworks_headers(framework)
        end.uniq
      end
    
        it 'should create a new dir for the newly created pod' do
      @sut.any_instance.stubs(:configure_template)
      url = @sut::TEMPLATE_REPO
      @sut.any_instance.expects(:git!).with(['clone', url, 'TestPod']).once
      run_command('lib', 'create', 'TestPod')
    end
    
        it 'includes boolean values' do
      generator = Generator::InfoPlistFile.new('1.0.0', Platform.new(:ios, '6.0'))
      generator.send(:to_plist, 'MyDictionary' => { 'MyTrue' => true, 'MyFalse' => false
                                                  }).should == <<-PLIST
<?xml version='1.0' encoding='UTF-8'?>
<!DOCTYPE plist PUBLIC '-//Apple//DTD PLIST 1.0//EN' 'http://www.apple.com/DTDs/PropertyList-1.0.dtd'>
<plist version='1.0'>
<dict>
  <key>MyDictionary</key>
  <dict>
    <key>MyFalse</key>
    <false/>
    <key>MyTrue</key>
    <true/>
  </dict>
</dict>
</plist>
      PLIST
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
    
        unreturned_return_items.group_by(&:exchange_shipments).each do |shipments, return_items|
      original_order = shipments.first.order
      order_attributes = {
        bill_address: original_order.bill_address,
        ship_address: original_order.ship_address,
        email: original_order.email
      }
      order_attributes[:store_id] = original_order.store_id
      order = Spree::Order.create!(order_attributes)
    
            def update
          authorize! :update, inventory_unit.order
    
              @properties = @properties.page(params[:page]).per(params[:per_page])
          respond_with(@properties)
        end
    
            def transfer_to_shipment
          @target_shipment = Spree::Shipment.find_by!(number: params[:target_shipment_number])
    
    # Now, add our init-scripts, systemd services, and so on:
pleaserun = package.convert(FPM::Package::PleaseRun)
pleaserun.input ['/usr/bin/my-executable', '--foo-from', 'bar']
    
        # Create the .txz package archive from the files in staging_path.
    File.open(output_path, 'wb') do |file|
      XZ::StreamWriter.new(file) do |xz|
        FPM::Util::TarWriter.new(xz) do |tar|
          # The manifests must come first for pkg.
          add_path(tar, '+COMPACT_MANIFEST',
                   File.join(staging_path, '+COMPACT_MANIFEST'))
          add_path(tar, '+MANIFEST',
                   File.join(staging_path, '+MANIFEST'))
    
      def dependencies
    bogus_regex = /[^\sA-Za-z0-9><=+._@-]/
    # Actually modifies depencies if they are not right
    bogus_dependencies = @dependencies.grep bogus_regex
    if bogus_dependencies.any?
      @dependencies.reject! { |a| a =~ bogus_regex }
      logger.warn('Some of the dependencies looked like they weren't package ' \
                  'names. Such dependency entries only serve to confuse arch. ' \
                  'I am removing them.',
                  :removed_dependencies => bogus_dependencies,
                  :fixed_dependencies => @dependencies)
    end
    return @dependencies
  end
    
      def iteration
    return @iteration ? @iteration : 1
  end
    
          ##
      #
      # Find an {Capybara::Node::Element} based on the given arguments that is also a sibling of the element called on.
      # {#sibling} will raise an error if the element is not found.
      #
      # {#sibling} takes the same options as {#find}.
      #
      #     element.sibling('#foo').find('.bar')
      #     element.sibling(:xpath, './/div[contains(., 'bar')]')
      #     element.sibling('ul', text: 'Quox').click_link('Delete')
      #
      # @param (see #find)
      #
      # @macro waiting_behavior
      #
      # @return [Capybara::Node::Element]      The found element
      # @raise  [Capybara::ElementNotFound]    If the element can't be found before time expires
      #
      def sibling(*args, **options, &optional_filter_block)
        options[:session_options] = session_options
        synced_resolve Capybara::Queries::SiblingQuery.new(*args, options, &optional_filter_block)
      end
    
    require 'launchy'
    
          def log(type)
        data = begin
                 execute :get_log, {}, type: type.to_s
               rescue ::Selenium::WebDriver::Error::UnknownCommandError
                 execute :get_log_legacy, {}, type: type.to_s
               end
    
      it 'fills in a field if default_set_options is nil' do
    Capybara.default_set_options = nil
    @session.fill_in(:form_first_name, with: 'Thomas')
    @session.click_button('awesome')
    expect(extract_results(@session)['first_name']).to eq('Thomas')
  end
    
      it 'can scroll the window to the vertical bottom' do
    @session.scroll_to :bottom
    max_scroll = @session.evaluate_script('document.body.scrollHeight - document.body.clientHeight')
    expect(@session.evaluate_script('[window.scrollX || window.pageXOffset, window.scrollY || window.pageYOffset]')).to eq [0, max_scroll]
  end