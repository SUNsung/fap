
        
          private
    
      def reject_existing_followers!
    @account.passive_relationships.where(account: Account.where(domain: @domain)).includes(:account).reorder(nil).find_each do |follow|
      reject_follow!(follow)
    end
  end
    
      def some_local_account
    @some_local_account ||= Account.representative
  end
end

    
      def call(account, poll, choices)
    authorize_with account, poll, :vote?
    
      def inboxes
    # Deliver the status to all followers.
    # If the status is a reply to another local status, also forward it to that
    # status' authors' followers.
    @inboxes ||= if @status.reply? && @status.thread.account.local? && @status.distributable?
                   @account.followers.or(@status.thread.account.followers).inboxes
                 else
                   @account.followers.inboxes
                 end
  end
    
      let(:user) { Fabricate(:user) }
    
      class UnexpectedResponseError < Error; end
    
        def assert_not_interned_error(obj, meth, name, msg = nil, &block)
      e = assert_raise(NameError, msg) {obj.__send__(meth, name, &block)}
      assert_not_pinneddown(name, msg)
      e
    end
    
        def initialize(dllname, func, import, export = '0', calltype = :stdcall)
      @proto = [import].join.tr(WIN32_TYPES, DL_TYPES).sub(/^(.)0*$/, '\1')
      import = @proto.chars.map {|win_type| TYPEMAP[win_type.tr(WIN32_TYPES, DL_TYPES)]}
      export = TYPEMAP[export.tr(WIN32_TYPES, DL_TYPES)]
      calltype = Fiddle::Importer.const_get(:CALL_TYPE_TO_ABI)[calltype]
    
    describe 'GzipReader#rewind' do
    
        z = Zlib::Inflate.new
    result << z.inflate(data)
    result << z.finish
    
          def initialize(linkage: :static, packaging: :library)
        raise ArgumentError, 'Invalid linkage option #{linkage.inspect}, valid options are #{KNOWN_LINKAGE_OPTIONS.inspect}' unless KNOWN_LINKAGE_OPTIONS.include?(linkage)
        raise ArgumentError, 'Invalid packaging option #{packaging.inspect}, valid options are #{KNOWN_PACKAGING_OPTIONS.inspect}' unless KNOWN_PACKAGING_OPTIONS.include?(packaging)
    
          it 'omits common specs' do
        variants = PodVariantSet.new([
          PodVariant.new([@root_spec, @default_subspec, @inner_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec, @inner_subspec, @foo_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec, @inner_subspec, @bar_subspec], [], [], Platform.ios),
        ])
        variants.scope_suffixes.values.should == %w(.common .common-Foo .common-Bar)
      end
    
    module Pod
  class Installer
    class Analyzer
      describe PodVariant do
        before do
          @specs = [stub('Spec'), stub('Spec/Foo')]
          @testspecs = [stub('Spec/Tests')]
          @appspecs = [stub('Spec/App')]
          @platform = Platform.ios
          @type = Target::BuildType.dynamic_framework
        end
    
              it 'does not add the -fobjc-arc to OTHER_LDFLAGS by default as Xcode 4.3.2 does not support it' do
            @consumer.stubs(:requires_arc?).returns(true)
            @xcconfig.to_hash['OTHER_LDFLAGS'].should.not.include('-fobjc-arc')
          end
    
                  phase.input_paths = nil
              phase.output_paths = nil
              phase.input_file_list_paths = input_paths_by_config.each_key.map(&:file_list_relative_path).uniq
              phase.output_file_list_paths = output_paths_by_config.each_key.map(&:file_list_relative_path).uniq
            else
              input_paths = input_paths_by_config.values.flatten(1).uniq
              output_paths = output_paths_by_config.values.flatten(1).uniq
              TargetIntegrator.validate_input_output_path_limit(input_paths, output_paths)
    
      it 'renders a user's story successfully' do
    expect(get: '/ben/this-is-a-slug').to route_to(
      controller: 'stories',
      action: 'show',
      slug: 'this-is-a-slug',
      username: 'ben',
    )
  end
    
        def install_path
      @install_path ||= if options[:path]
          Pathname.new(File.join(options[:path], 'bourbon'))
        else
          Pathname.new('bourbon')
        end
    end
    
      context 'called with three colors' do
    it 'applies second color to left and right' do
      rule = 'border-color: #f00 #0f0 #00f'
    
    
#
# Tests
#
    
      Resque.remove_worker(worker)
  puts '** removed #{worker}'
end
    
          def show_args(args)
        Array(args).map do |a|
          a.to_yaml
        end.join('\n')
      rescue
        args.to_s
      end
    
      def page_entries_info(start, stop, size, name = nil)
    if size == 0
      name ? 'No #{name}s' : '<b>0</b>'
    elsif size == 1
      'Showing <b>1</b>' + (name ? ' #{name}' : '')
    elsif size > failed_per_page
      'Showing #{start}-#{stop} of <b>#{size}</b>' + (name ? ' #{name}s' : '')
    else
      'Showing #{start} to <b>#{size - 1}</b>' + (name ? ' #{name}s' : '')
    end
  end
end

    
        @@all_heartbeat_threads = []
    def self.kill_all_heartbeat_threads
      @@all_heartbeat_threads.each(&:kill).each(&:join)
      @@all_heartbeat_threads = []
    end