
        
          def test_numeric_fields_with_scale
    m = NumericData.new(
      bank_balance: 1586.43122334,
      big_bank_balance: BigDecimal('234000567.952344'),
      world_population: 2**62,
      my_house_population: 3
    )
    assert m.save
    
        %w(SPATIAL FULLTEXT UNIQUE).each do |type|
      expected = 'CREATE #{type} INDEX `index_people_on_last_name`  ON `people` (`last_name`) '
      assert_equal expected, add_index(:people, :last_name, type: type)
    end
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for Apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for NGINX
    
            def ref
          @symbol
        end
        alias to_sym ref
    
        def purge_tombstone(grace_period)
    end
    
          if message_template == :email_reject_post_too_short
        template_args[:count] = SiteSetting.min_post_length
      end
    
      def update_user_counts
    return if @opts[:import_mode]
    
        if request.put?
      params[:reviewable_priorities].each do |id, priority|
        if !priority.nil? && Reviewable.priorities.has_value?(priority.to_i)
          # For now, the score bonus is equal to the priority. In the future we might want
          # to calculate it a different way.
          PostActionType.where(id: id).update_all(
            reviewable_priority: priority.to_i,
            score_bonus: priority.to_f
          )
        end
      end
    end
    
      protected
    
          path_name = url_method(params.slice(:category, :parent_category))
      canonical_url '#{Discourse.base_url_no_prefix}#{public_send(path_name, *(params.slice(:parent_category, :category, :tag_id).values.map { |t| t.force_encoding('UTF-8') }))}'
    
    module Gitlab
  module CryptoHelper
    extend self
    
      describe '#can_resend_invite?' do
    context 'when group_member is invited' do
      before do
        expect(group_member).to receive(:invite?).and_return(true)
      end
    
            def diff_stats_collection
          strong_memoize(:diff_stats) do
            # There are scenarios where we don't need to request Diff Stats,
            # when caching for instance.
            next unless @include_stats
            next unless diff_refs
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      # Helper for use after calling send_*_instructions methods on a resource.
  # If we are in paranoid mode, we always act as if the resource was valid
  # and instructions were sent.
  def successfully_sent?(resource)
    notice = if Devise.paranoid
      resource.errors.clear
      :send_paranoid_instructions
    elsif resource.errors.empty?
      :send_instructions
    end
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
    version = ['', 'ext/etc/'].find do |dir|
  begin
    break File.open(File.expand_path('../#{dir}/etc.c', __FILE__)) do |f|
      f.gets '\n#define RUBY_ETC_VERSION '
      f.gets[/'(.+)'/, 1]
    end
  rescue
    next
  end
end
    
      def test_untainted_numeric
    bug8945 = '[ruby-core:57346] [Bug #8945] Numerics never be tainted'
    b = RbConfig::LIMITS['FIXNUM_MAX'] + 1
    tainted = [0, 1.0, 1.72723e-77, b].select do |x|
      Marshal.load(Marshal.dump(x).taint).tainted?
    end
    assert_empty(tainted.map {|x| [x, x.class]}, bug8945)
  end
    
      describe 'in the middle of the stream' do
    before :each do
      @gz = Zlib::GzipReader.new(@io)
      @gz.read 5
    end
    
          it 'makes eof? false' do
        @gz.ungetc 'ŷ'
        @gz.eof?.should be_false
      end
    end
    
        @inflator.inflate(@zeros) do |chunk|
      @chunks << chunk
      break
    end
    
    Then(/^directories in :linked_dirs are created in shared$/) do
  TestApp.linked_dirs.each do |dir|
    run_vagrant_command(test_dir_exists(TestApp.shared_path.join(dir)))
  end
end
    
      context 'when redirected routes' do
    include RSpec::Rails::RequestExampleGroup
    
      def user_is_author?
    if record.instance_of?(Article)
      record.user_id == user.id
    else
      record.pluck(:user_id).uniq == [user.id]
    end
  end
    
          exit!('Project #{existing} doesn't exist!') \
        unless Tmuxinator::Config.exists?(name: existing)
    
              after(:all) do
            puts @session
            Kernel.system 'tmux kill-session -t #{@session}'
          end
    
        def build_panes(panes_yml)
      return if panes_yml.nil?
    
        allow(window).to receive(:project).and_return project
    allow(window).to receive(:index).and_return 0
  end
    
      describe '::parse_settings' do
    let(:args) { ['one', 'two=three'] }
    
        def rvm?
      yaml['rvm']
    end
    
      describe '#render' do
    it 'renders the template' do
      expect(File).to receive(:read).at_least(:once) { 'wemux ls 2>/dev/null' }
    
          def xdg?
        File.directory?(xdg)
      end
    
          it 'returns the flattened command' do
        expect(window.commands).to eq [
          'tmux send-keys -t test:1 git\\ fetch C-m',
          'tmux send-keys -t test:1 git\\ status C-m'
        ]
      end
    end