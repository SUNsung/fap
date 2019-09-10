
        
            service_stub = double
    allow(ActivityPub::FetchRemoteAccountService).to receive(:new).and_return(service_stub)
    allow(service_stub).to receive(:call).and_return(new_account)
  end
    
      let(:user)   { Fabricate(:user, account: Fabricate(:account, username: 'alice')) }
  let(:scopes) { '' }
  let(:token)  { Fabricate(:accessible_access_token, resource_owner_id: user.id, scopes: scopes) }
    
        let(:follow)  { double(account: account, errors: errors) }
    let(:errors)  { double(add: nil) }
    let(:account) { double(nil?: _nil, local?: local, following_count: 0, followers_count: 0) }
    let(:_nil)    { true }
    let(:local)   { false }
    
          context 'if the message chain initiated by recipient, but is not direct message' do
        let(:reply_to) { Fabricate(:status, account: recipient) }
        let(:activity) { Fabricate(:mention, account: recipient, status: Fabricate(:status, account: sender, visibility: :direct, thread: reply_to)) }
    
      let(:user)   { Fabricate(:user, account: Fabricate(:account, username: 'alice')) }
  let(:scopes) { 'read:statuses' }
  let(:token)  { Fabricate(:accessible_access_token, resource_owner_id: user.id, scopes: scopes) }
    
        it 'fetches the correct path for ruby on Windows' do
      Gem.stubs(:win_platform?).returns(true)
      File.stubs(:file?).returns(true)
      File.stubs(:executable?).returns(true)
      ruby_path = File.basename(Executable.which('ruby'))
      ruby_path.should == 'ruby.exe'
    end
    
            # Groups the collection by result of the block.
        #
        # @param [Block<Variant, #hash>] block
        # @return [Array<PodVariantSet>]
        #
        def group_by(&block)
          variants.group_by(&block).map { |_, v| PodVariantSet.new(v) }
        end
    
                if existing && existing != file_ref
              if existing.real_path.to_path.start_with?(pod_bundle.sandbox.root.to_path << '/')
                config.base_configuration_reference = file_ref
              elsif !xcconfig_includes_target_xcconfig?(config.base_configuration_reference, path)
                unless existing_config_is_identical_to_pod_config?(existing.real_path, pod_bundle.xcconfig_path(config.name))
                  UI.warn 'CocoaPods did not set the base configuration of your ' \
                  'project because your project already has a custom ' \
                  'config set. In order for CocoaPods integration to work at ' \
                  'all, please either set the base configurations of the target ' \
                  '`#{target.name}` to `#{path}` or include the `#{path}` in your ' \
                  'build configuration (#{UI.path(existing.real_path)}).'
                end
              end
            elsif config.base_configuration_reference.nil? || file_ref.nil?
              config.base_configuration_reference = file_ref
            end
          end
    
        it 'should use the default URL if no template URL is given' do
      template_url = 'https://github.com/CocoaPods/pod-template.git'
      @sut.any_instance.expects(:git!).with(['clone', template_url, 'TestPod']).once
      run_command('lib', 'create', 'TestPod')
    end
  end
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
    
            private
    
            private
    
                def collection_serializer
              Spree::Api::Dependencies.storefront_credit_card_serializer.constantize
            end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
        # Loops through the list of category pages and processes each one.
    def write_category_indexes
      if self.layouts.key? 'category_index'
        dir = self.config['category_dir'] || 'categories'
        self.categories.keys.each do |category|
          self.write_category_index(File.join(dir, category.to_url), category)
        end
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end
    
        # Disable testing because we don't really need to run the cpan tests. The
    # goal is to see the parsed result (name, module description, etc)
    # Additionally, it fails on my workstation when cpan_test? is enabled due
    # to not finding `Test.pm`, and it seems like a flakey test if we keep this
    # enabled.
    subject.attributes[:cpan_test?] = false
    subject.input('Digest::MD5')
    insist { subject.name } == 'perl-Digest-MD5'
    insist { subject.description } == 'Perl interface to the MD-5 algorithm'
    insist { subject.vendor } == 'Gisle Aas <gisle@activestate.com>'
    # TODO(sissel): Check dependencies
  end
    
          context 'and :python_package_name_prefix is set' do
        it 'should prefix the package name appropriately' do
          prefix = 'whoa'
          subject.attributes[:python_package_name_prefix] = prefix
          subject.input(example_dir)
          insist { subject.name } == '#{prefix}-example'
        end
      end
    end
    
    # This example uses the API to create a package from local files
# it also creates necessary init-scripts and systemd files so our executable can be used as a service
    
        # Apply the options for this package on the clamp command
    #
    # Package flags become attributes '{type}-flag'
    #
    # So if you have:
    #
    #     class Foo < FPM::Package
    #       option '--bar-baz' ...
    #     end
    #
    # The attribute value for --foo-bar-baz will be :foo_bar_baz'
    def apply_options(clampcommand)
      @options ||= []
      @options.each do |args|
        flag, param, help, options, block = args
        clampcommand.option(flag, param, help, options, &block)
      end
    end # def apply_options
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
    # TODO(sissel): Add dependency checking support.
# IIRC this has to be done as a 'checkinstall' step.
class FPM::Package::Solaris < FPM::Package