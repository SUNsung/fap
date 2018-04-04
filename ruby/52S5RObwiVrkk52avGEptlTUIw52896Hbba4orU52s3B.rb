
        
            class Callback3 < ControllerWithCallbacks
      before_action do |c|
        c.instance_variable_set('@text', 'Hello world')
      end
    
            if value.is_a?(Hash) || value.is_a?(ActionController::Parameters)
          value = '(#{dump_params_keys(value)})'
        else
          value = ''
        end
    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
    def dest_dir(*subdirs)
  test_dir('dest', *subdirs)
end
    
    options = {
  sort: true,
  limit: 30,
  format: :text,
}
    
          def delete(key)
        super(convert_key(key))
      end
    
              if argv.length == 2
            # @deprecated
            @env.ui.warn('WARNING: The second argument to `vagrant box remove`')
            @env.ui.warn('is deprecated. Please use the --provider flag. This')
            @env.ui.warn('feature will stop working in the next version.')
            options[:provider] = argv[1]
          end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
      def test_bom_32le
    assert_bom(['\xFF\xFE\0', '\0'], __method__)
  end
    
      it 'decodes positive Infinity' do
    '\x00\x00\x80\x7f'.unpack(unpack_format).should == [infinity_value]
  end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
      def self.main_thread2(critical_thread)
    Thread.pass # The join below seems to cause a deadlock with CRuby unless Thread.pass is called first
    critical_thread.join
    Thread.critical.should == false
  end
    
        10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != 'sleep' }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)
    
      class Callbacks
    def self.around_create(record)
      now = Time.now.utc
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
      def set_body_classes
    @body_classes = 'tag-body'
  end
    
      def icon
    object.image
  end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      it 'should set the X-Frame-Options' do
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('SAMEORIGIN')
  end
    
        %w[/foo/bar /foo/bar/ / /.f /a.x].each do |path|
      it('does not touch #{path.inspect}') { expect(get(path).body).to eq(path) }
    end
    
      it 'should set the X-XSS-Protection' do
    expect(get('/', {}, 'wants' => 'text/html;charset=utf-8').headers['X-XSS-Protection']).to eq('1; mode=block')
  end