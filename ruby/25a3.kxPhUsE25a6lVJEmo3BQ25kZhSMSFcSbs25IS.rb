
        
          private
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
        @web_subscription.update!(data: data_params)
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      YARD::Rake::YardocTask.new do |t|
    t.files = FileList.new(scope('lib/**/*.rb')) do |list|
      list.exclude('lib/sass/plugin/merb.rb')
      list.exclude('lib/sass/plugin/rails.rb')
    end.to_a
    t.options << '--incremental' if Rake.application.top_level_tasks.include?('redoc')
    t.options += FileList.new(scope('yard/*.rb')).to_a.map {|f| ['-e', f]}.flatten
    files = FileList.new(scope('doc-src/*')).to_a.sort_by {|s| s.size} + %w[MIT-LICENSE VERSION]
    t.options << '--files' << files.join(',')
    t.options << '--template-path' << scope('yard')
    t.options << '--title' << ENV['YARD_TITLE'] if ENV['YARD_TITLE']
    
          private
    
          if @fake_update && !dirs.empty?
        # Issue 1602.
        Sass::Util.sass_warn <<WARNING.strip
DEPRECATION WARNING: Compiling directories without --update or --watch is
deprecated and won't work in future versions of Sass. Instead use:
  #{@default_syntax} --update #{@args}
WARNING
      end
    
    (allow file-ioctl)
(allow sysctl-read)
(allow mach-lookup)
(allow ipc-posix-shm)
(allow process-fork)
(allow system-socket)
    
          def self.options
        options = []
        options.concat(super.reject { |option, _| option == '--silent' })
      end
    
    post '/msg' do
  SinatraWorker.perform_async params[:msg]
  redirect to('/')
end
    
          Sidekiq.redis do |conn|
        conn.pipelined do
          jobs_to_requeue.each do |queue, jobs|
            conn.rpush('queue:#{queue}', jobs)
          end
        end
      end
      Sidekiq.logger.info('Pushed #{inprogress.size} jobs back to Redis')
    rescue => ex
      Sidekiq.logger.warn('Failed to requeue #{inprogress.size} jobs: #{ex.message}')
    end
    
          def initialize
        @entries = []
        yield self if block_given?
      end