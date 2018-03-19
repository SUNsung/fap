
        
              private
        def listener
          @listener || @server.mutex.synchronize { @listener ||= Listener.new(self, @server.event_loop) }
        end
    
          def first
        @text = 'Hello world'
      end
    
    require 'abstract_unit'
    
      class ExclaimerMiddleware
    def initialize(app)
      @app = app
    end
    
        assert_raises(Interrupt) do
      req.request_parameters
    end
  end
    
    ActionMailer::LogSubscriber.attach_to :action_mailer

    
        begin
      raise '#{short_type} does not support dry-run' unless can_dry_run?
      readonly!
      @dry_run_started_at = Time.zone.now
      @dry_run_logger.info('Dry Run started')
      if event
        raise 'This agent cannot receive an event!' unless can_receive_events?
        receive([event])
      else
        check
      end
      @dry_run_logger.info('Dry Run finished')
    rescue => e
      @dry_run_logger.info('Dry Run failed')
      error 'Exception during dry-run. #{e.message}: #{e.backtrace.join('\n')}'
    end
    
        respond_to do |format|
      format.html { redirect_to jobs_path, notice: 'Failed jobs removed.' }
      format.json { head :no_content }
    end
  end
    
      def update
    @user_credential = current_user.user_credentials.find(params[:id])
    
        def as_json
      @pages
    end
    
            css('[id]').each do |node|
          # Module
          if node.name == 'h2'
            type = node.content.remove 'Backbone.'
            if type.capitalize! # sync, history
              entries << [node.content, node['id'], type]
            end
            next
          end
    
      def test_assoc
    assert_nil(ENV.assoc('test'))
    ENV['test'] = 'foo'
    k, v = ENV.assoc('test')
    if IGNORE_CASE
      assert_equal('TEST', k.upcase)
      assert_equal('FOO', v.upcase)
    else
      assert_equal('test', k)
      assert_equal('foo', v)
    end
    assert_invalid_env {|var| ENV.assoc(var)}
    assert_predicate(v, :tainted?)
    assert_equal(Encoding.find('locale'), v.encoding)
  end
    
        o = Object.new
    def o.hash; 2 << 100; end
    assert_equal({o=>1}.hash, @cls[o=>1].hash)
  end
    
        assert_not_equal(set1, set2)
  end
    
      def test_reinitialize
    bug8099 = '[ruby-core:53436] [Bug #8099]'
    t2000 = get_t2000
    assert_raise(TypeError, bug8099) {
      t2000.send(:initialize, 2013, 03, 14)
    }
    assert_equal(get_t2000, t2000, bug8099)
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
      it 'cannot be rescued' do
    thread = Thread.new do
      begin
        Thread.current.send(@method)
      rescue Exception
        ScratchPad.record :in_rescue
      end
     ScratchPad.record :end_of_thread_block
    end
    
      it 'spawns a new Thread running the block' do
    run = false
    t = Thread.send(@method) { run = true }
    t.should be_kind_of(Thread)
    t.join
    
          connection.execute(<<~SQL)
        CREATE OR REPLACE FUNCTION timestamp_id(table_name text)
        RETURNS bigint AS
        $$
          DECLARE
            time_part bigint;
            sequence_base bigint;
            tail bigint;
          BEGIN
            time_part := (
              -- Get the time in milliseconds
              ((date_part('epoch', now()) * 1000))::bigint
              -- And shift it over two bytes
              << 16);
    
      yield
end
    
          expect(response).to redirect_to(settings_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
          # Prints a table for a given array of records. For each record, the block
      # is yielded two arguments: the record and a Row object. To print values
      # for that record, add values using `row << 'some value'`. A row can
      # optionally be highlighted in yellow using `row.yellow`.
      def table(records, &block)
        return if records.empty?
        rows = collect_rows(records, &block)
        col_widths = calculate_column_widths(rows)
    
        def ensure_stage
      Rake::Task.define_task(:ensure_stage) do
        unless stage_set?
          puts t(:stage_not_set)
          exit 1
        end
      end
    end
    
      # Read and eval a .rake file in such a way that `self` within the .rake file
  # refers to this plugin instance. This gives the tasks in the file access to
  # helper methods defined by the plugin.
  def eval_rakefile(path)
    contents = IO.read(path)
    instance_eval(contents, path, 1)
  end
    
          it 'filters from ENV[ROLES]' do
        hosts = dsl.roles(:db)
        all = dsl.roles(:all)
        SSHKit::Coordinator.expects(:new).with(hosts).returns(@coordinator)
        ENV['ROLES'] = 'db'
        dsl.on(all)
      end
    
      it 'overrides the rake method, and sets the sshkit_backend to SSHKit::Backend::Printer' do
    capture_io do
      flags '--dry-run', '-n'
    end
    sshkit_backend = Capistrano::Configuration.fetch(:sshkit_backend)
    expect(sshkit_backend).to eq(SSHKit::Backend::Printer)
  end
    
        # Returns the fingerprint of the instance.
    def fingerprint attachment, style_name
      attachment.fingerprint
    end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
    module Paperclip
  require 'rails'