
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      Jekyll::Command.subclasses.each { |c| c.init_with_program(p) }
    
    require 'erb'
    
      describe '.create' do
    it 'creates a key with the client' do
      expected_service_configs = {
        'U27F4V844T' => [],
        'DQ8HTZ7739' => [],
        '6A7HVUVQ3M' => ['some-music-id']
      }
      mock_client_response(:create_key!, with: { name: 'New Key', service_configs: expected_service_configs }) do
        {
          keyId: 'a-new-key-id'
        }
      end
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
          it 'returns the new version as return value' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)
    
        def every(*args, &blk)
      schedule(:every, args, &blk)
    end
    
        respond_to do |format|
      format.html { render layout: !request.xhr? }
      format.json { render json: @jobs }
    end
  end
    
      def update
    @user_credential = current_user.user_credentials.find(params[:id])
    
            # This returns all the registered configuration classes.
        #
        # @return [Hash]
        def config
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:top])
            end
          end
        end
    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
    require 'extend/os/cleaner'

    
    # Legacy patches have no checksum and are not cached
class LegacyPatch < ExternalPatch
  def initialize(strip, url)
    super(strip)
    resource.url(url)
    resource.download_strategy = CurlDownloadStrategy
  end
    
      # Hack for ruby < 1.9.3
  def noecho_gets
    system 'stty -echo'
    result = $stdin.gets
    system 'stty echo'
    puts
    result
  end
    
        def any_searchfield_present?
      if %w(username email guid under13).all? { |attr| public_send(attr).blank? }
        errors.add :base, 'no fields for search set'
      end
    end
    
            def block_argument?
          argument? && @scope.node.block_type?
        end