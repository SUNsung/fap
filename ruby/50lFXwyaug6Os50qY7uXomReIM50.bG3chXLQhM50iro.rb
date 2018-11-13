
        
                  def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
    module ActionView
  # This class defines the interface for a renderer. Each class that
  # subclasses +AbstractRenderer+ is used by the base +Renderer+ class to
  # render a specific type of object.
  #
  # The base +Renderer+ class uses its +render+ method to delegate to the
  # renderers. These currently consist of
  #
  #   PartialRenderer - Used for rendering partials
  #   TemplateRenderer - Used for rendering other types of templates
  #   StreamingTemplateRenderer - Used for streaming
  #
  # Whenever the +render+ method is called on the base +Renderer+ class, a new
  # renderer object of the correct type is created, and the +render+ method on
  # that new object is called in turn. This abstracts the setup and rendering
  # into a separate classes for partials and templates.
  class AbstractRenderer #:nodoc:
    delegate :find_template, :find_file, :template_exists?, :any_templates?, :with_fallbacks, :with_layout_format, :formats, to: :@lookup_context
    
    UserEmail.seed do |ue|
  ue.id = -1
  ue.email = 'no_email'
  ue.primary = true
  ue.user_id = -1
end
    
            lounge.topic_id = post.topic.id
        unless lounge.save
          puts lounge.errors.full_messages
          puts 'Failed to set the lounge description topic!'
        end
    
        t.wakeup
    t.value.should == 5
  end
end
    
        s = mock('seed')
    s.should_receive(:to_int).and_return 0
    srand(s)
  end
    
      it 'accepts a proc argument instead of a block' do
    captured = nil
    
        # Returns the standard exception backtrace,
    # including the Sass backtrace.
    #
    # @return [Array<String>]
    def backtrace
      return nil if super.nil?
      return super if sass_backtrace.all? {|h| h.empty?}
      sass_backtrace.map do |h|
        '#{h[:filename] || '(sass)'}:#{h[:line]}' +
          (h[:mixin] ? ':in `#{h[:mixin]}'' : '')
      end + super
    end
    
          if examples
        title 'Running examples'
        Rake::Task['examples:build'].invoke
      end
    
          def report
        <<-EOS
    
      <a href='/'>Refresh page</a>
    
        def retrieve_work
      work = Sidekiq.redis { |conn| conn.brpop(*queues_cmd) }
      UnitOfWork.new(*work) if work
    end
    
          ObjectSpace.each_object(File) do |fp|
        begin
          if !fp.closed? && fp.stat.file? && fp.sync && (fp.fcntl(Fcntl::F_GETFL) & append_flags) == append_flags
            to_reopen << fp
          end
        rescue IOError, Errno::EBADF
        end
      end
    
          def __set_test_mode(mode)
        if block_given?
          current_mode = self.__test_mode
          begin
            self.__test_mode = mode
            yield
          ensure
            self.__test_mode = current_mode
          end
        else
          self.__test_mode = mode
        end
      end
    
        def app
      @app ||= build
    end