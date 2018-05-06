    def valid_type?(type)
      const_get(:TYPES).include?(type)
    end
    
          if options[:type] == :array && (options[:values].blank? || !options[:values].is_a?(Array))
        raise ArgumentError.new('When using :array as :type you need to provide the :values as an Array')
      end
    
      def retry_queued
    @jobs = Delayed::Job.awaiting_retry.update_all(run_at: Time.zone.now)
    
    respond_to do |format|
      format.html { redirect_to jobs_path, notice: 'Queued jobs getting retried.' }
      format.json { head :no_content }
    end
  end
    
      before_action :upgrade_warning, only: :index
    
      def user_credential_params
    params.require(:user_credential).permit(:credential_name, :credential_value, :mode)
  end
end

    
        def to_a
      @filters.dup
    end
    
        def initialize
      @pages = {}
    end
    
          if options && options[:ignore_case]
        base = base.downcase
        dest = dest.downcase
      end
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
      def test_untainted_path
    bug5374 = '[ruby-core:39745]'
    cwd = ('./'*40+'.'.taint).dup.untaint
    in_safe = proc {|safe| $SAFE = safe; File.stat(cwd)}
    assert_not_send([cwd, :tainted?])
    (0..1).each do |level|
      assert_nothing_raised(SecurityError, bug5374) {in_safe[level]}
    end
  ensure
    $SAFE = 0
  end
    
      it 'decodes positive Infinity' do
    '\x00\x00\x00\x00\x00\x00\xf0\x7f'.unpack(unpack_format).should == [infinity_value]
  end
    
      it 'decodes past whitespace bytes when passed the '*' modifier' do
    [ ['a b c',    ['a b c']],
      ['a\fb c',   ['a\fb c']],
      ['a\nb c',   ['a\nb c']],
      ['a\rb c',   ['a\rb c']],
      ['a\tb c',   ['a\tb c']],
      ['a\vb c',   ['a\vb c']],
    ].should be_computed_by(:unpack, unpack_format('*'))
  end
end
    
      class SubclassX < Struct
  end
    
      def self.dying_thread_with_outer_ensure(kill_method_name=:kill)
    Thread.new do
      Thread.current.report_on_exception = false
      begin
        begin
          Thread.current.send(kill_method_name)
        ensure
          raise 'In dying thread'
        end
      ensure
        yield
      end
    end
  end
    
      guard -> {
    with_timezone 'right/UTC' do
      (Time.gm(1972, 6, 30, 23, 59, 59) + 1).sec == 60
    end
  } do
    it 'handles real leap seconds in zone 'right/UTC'' do
      with_timezone 'right/UTC' do
        time = Time.send(@method, 1972, 6, 30, 23, 59, 60)
    
    namespace :gem do
  def version
    require 'spree/core/version'
    Spree.version
  end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address