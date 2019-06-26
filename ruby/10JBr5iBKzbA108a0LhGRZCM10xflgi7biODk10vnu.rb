
        
                  # Go through each VM and yield it!
          vms.each do |old_vm|
            # We get a new VM from the environment here to avoid potentially
            # stale VMs (if there was a config reload on the environment
            # or something).
            vm = @env.vms[old_vm.name]
            yield vm
          end
        end
    
            # This method is called if the underlying machine ID changes. Providers
        # can use this method to load in new data for the actual backing
        # machine or to realize that the machine is now gone (the ID can
        # become `nil`). No parameters are given, since the underlying machine
        # is simply the machine instance given to this object. And no
        # return value is necessary.
        def machine_id_changed
        end
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
      before_action :require_user!
    
      def export_data
    raise 'Override in controller'
  end
    
    class RemoteUnfollowsController < ApplicationController
  layout 'modal'
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    describe StreamsController, :type => :controller do
  include_context :gon
    
              current_range = declaration_with_comment(node)
          previous_range = declaration_with_comment(previous_declaration)
    
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
    
      desc 'Build all spree gems'
  task :build do
    pkgdir = File.expand_path('../pkg', __FILE__)
    FileUtils.mkdir_p pkgdir
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
    # and write them both.
begin
  output_packages.each do |output_package|
    output = output_package.to_s
    output_package.output(output)
    
        if attributes[:before_install_given?] or attributes[:after_install_given?]
      write_scripts
      args += ['--scripts', scripts_path]
    end
    args << output_path
    
      def to_s(format=nil)
    # Default format if nil
    # git_1.7.9.3-1-amd64.pkg.tar.xz
    return super(format.nil? ? 'NAME-FULLVERSION-ARCH.EXTENSION' : format)
  end # def to_s
    
        if attributes[:pear_data_dir]
      logger.info('Setting data_dir', :data_dir => attributes[:pear_data_dir])
      safesystem('pear', '-c', config, 'config-set', 'data_dir', '#{staging_path(installroot)}/#{attributes[:pear_data_dir]}')
    end
    
        File.write(build_path('build-info'), `pkg_info -X pkg_install | egrep '^(MACHINE_ARCH|OPSYS|OS_VERSION|PKGTOOLS_VERSION)'`)
    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end
    
        # Unpack the tarball to the staging path
    args = ['-cf', output_path, '-C', staging_path]
    tar_compression_flag(output_path).tap do |flag|
      args << flag unless flag.nil?
    end
    args << '.'
    
      private
    
          def default_project(name)
        '#{directory}/#{name}.yml'
      end
    
        it 'lists the commands' do
      out, _err = capture_io { cli.start }
      expected = %w(commands
                    completions
                    new
                    edit
                    open
                    start
                    stop
                    local
                    debug
                    copy
                    delete
                    implode
                    version
                    doctor
                    list)
      expect(out).to eq '#{expected.join('\n')}\n'
    end
  end