
        
        # Searches and reads files present on each GitLab project repository
module Gitlab
  module Template
    module Finders
      class RepoTemplateFinder < BaseTemplateFinder
        # Raised when file is not found
        FileNotFoundError = Class.new(StandardError)
    
        def aes256_gcm_encrypt(value)
      encrypted_token = Encryptor.encrypt(AES256_GCM_OPTIONS.merge(value: value))
      Base64.strict_encode64(encrypted_token)
    end
    
          context 'and user can update_project_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :update_project_member, presenter).and_return(true)
        end
    
      context 'when should not request diff stats' do
    it 'Repository#diff_stats is not called' do
      collection_default_args[:diff_options][:include_stats] = false
    
            def create_project_service_account
          Clusters::Gcp::Kubernetes::CreateOrUpdateServiceAccountService.namespace_creator(
            platform.kubeclient,
            service_account_name: kubernetes_namespace.service_account_name,
            service_account_namespace: kubernetes_namespace.namespace,
            rbac: platform.rbac?
          ).execute
        end
    
          stime = Time.now.to_i
    
        # In the case where a plus or slash happened at the end of a chunk,
    # we'll have two dots next to each other, so fix it up.  Note that this
    # is searching for literal dots, not a regex matching any two
    # characters
    b64.gsub!('..', '.')
    
    payload = File.binread('payload.dylib')
output_data[add_dylib, payload.size] = payload
    
          unless opts[:domain_sid]
        domain_sid = dcsync_result[:sid].split('-')
        opts[:domain_sid] = domain_sid[0, domain_sid.length - 1].join('-')
        print_warning('Domain SID missing, using #{opts[:domain_sid]} extracted from SID of #{krbtgt_username}')
      end
    end
    
        path = datastore['PATH'] || session.sys.config.getenv('USERPROFILE')
    path.chomp!('\\')
    
      # Function for writing executable to target host
  #-------------------------------------------------------------------------------
  def write_exe_to_target(rexe, rexename)
    # check if we have write permission
    # I made it by myself because the function filestat.writable? was not implemented yet.
    if not datastore['LocalExePath'].nil?
    
    
    
      #logfile name
  logfile = logs + ::File::Separator + Rex::FileUtils.clean_path(host + filenameinfo) + '.rc'
  return logfile
end
    
      #
  # The OSX version uses an apple script to do this
  #
  def osx_start_video(_id)
    script = ''
    script << %Q|osascript -e 'tell application 'Safari' to open location '#{youtube_url}'' |
    script << %Q|-e 'activate application 'Safari'' |
    script << %Q|-e 'tell application 'System Events' to key code {59, 55, 3}'|
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end
    
          def http_error_page_as_json(e)
        render json: {error: :invalid_request, error_description: e.message}, status: 400
      end
    
          private
    
        if @aspect.save
      result = {id: @aspect.id, name: @aspect.name}
      if aspecting_person_id.present?
        aspect_membership = connect_person_to_aspect(aspecting_person_id)
        result[:aspect_membership] = AspectMembershipPresenter.new(aspect_membership).base_hash if aspect_membership
      end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
            it 'returns false' do
          expect(node.pure?).to be(false)
        end
      end
    end
    
      describe '#parent_class' do
    context 'when a parent class is specified' do
      let(:source) do
        'class Foo < Bar; end'
      end
    
          it 'is not fooled by single line blocks' do
        expect_no_offenses(<<~RUBY)
          some_method #{open} do_something #{close}
          something_else
        RUBY
      end
    end
  end
end

    
        context 'when a keyword argument is unused' do
      let(:source) { <<-RUBY }
        def some_method(foo, bar: 1)
          puts foo
        end
      RUBY
    
          it { expect(if_node.is_a?(described_class)).to be(true) }
    end
    
            context 'with MyNamespace' do
          it 'does not register an offense' do
            expect_no_offenses('1.is_a?(MyNamespace::#{klass})')
          end
        end
      end
    end
  end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
    is_travis = ENV['TRAVIS_OS_NAME'] && !ENV['TRAVIS_OS_NAME'].empty?
    
      config.vm.define :smartos do |smartos|
    smartos.vm.box = 'smartos-base1310-64-virtualbox-20130806.box'
    smartos.vm.box_url = 'http://dlc-int.openindiana.org/aszeszo/vagrant/smartos-base1310-64-virtualbox-20130806.box'
  end
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}