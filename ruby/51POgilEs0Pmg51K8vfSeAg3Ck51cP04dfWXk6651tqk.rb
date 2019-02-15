
        
            def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        def initialize
      @pages = {}
    end
    
            css('.code-example > h4').each do |node|
          node['class'] = 'pre-title'
        end
    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
        # The content passed to this environment. If the content's environment isn't already
    # read-only, it's made read-only.
    #
    # @see BaseEnvironment#content
    #
    # @return {[Array<Sass::Tree::Node>, ReadOnlyEnvironment]?} The content nodes and
    #   the lexical environment of the content block.
    #   Returns `nil` when there is no content in this environment.
    def content
      # Return the cached content from a previous invocation if any
      return @content if @content_cached
      # get the content with a read-write environment from the superclass
      read_write_content = super
      if read_write_content
        tree, env = read_write_content
        # make the content's environment read-only
        if env && !env.is_a?(ReadOnlyEnvironment)
          env = ReadOnlyEnvironment.new(env, env.options)
        end
        @content_cached = true
        @content = [tree, env]
      else
        @content_cached = true
        @content = nil
      end
    end
  end
    
    module Sass::Exec
  # The abstract base class for Sass executables.
  class Base
    # @param args [Array<String>] The command-line arguments
    def initialize(args)
      @args = args
      @options = {}
    end
    
      def package(gem, ext='')
    'pkg/#{gem}-#{source_version}' + ext
  end
    
          def html?(headers)
        return false unless header = headers.detect { |k,v| k.downcase == 'content-type' }
        options[:html_types].include? header.last[/^\w+\/\w+/]
      end
    end
  end
end

    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end
    
      module TestingClient
    def raw_push(payloads)
      if Sidekiq::Testing.fake?
        payloads.each do |job|
          job = Sidekiq.load_json(Sidekiq.dump_json(job))
          job.merge!('enqueued_at' => Time.now.to_f) unless job['at']
          Queues.push(job['queue'], job['class'], job)
        end
        true
      elsif Sidekiq::Testing.inline?
        payloads.each do |job|
          klass = Sidekiq::Testing.constantize(job['class'])
          job['id'] ||= SecureRandom.hex(12)
          job_hash = Sidekiq.load_json(Sidekiq.dump_json(job))
          klass.process_job(job_hash)
        end
        true
      else
        super
      end
    end
  end
    
        def watchdog(last_words)
      yield
    rescue Exception => ex
      handle_exception(ex, { context: last_words })
      raise ex
    end