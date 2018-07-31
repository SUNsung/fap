
        
          def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
        # Optional
    #   Use this method the gracefully stop your agent but make sure the run method return, or
    #   terminate the thread.
    def stop; end
  end
end
=end
module LongRunnable
  extend ActiveSupport::Concern
    
      def edit
    @user_credential = current_user.user_credentials.find(params[:id])
  end
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          if options.has_key?(:only)
        @used_routes = self.routes & Array(options[:only]).map(&singularizer)
      elsif options[:skip] == :all
        @used_routes = []
      else
        @used_routes = self.routes - Array(options[:skip]).map(&singularizer)
      end
    end
    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
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
    
              fd.write(res)
        end
      end
      break
    rescue ::Timeout::Error
      $stderr.puts '#{prefix}#{site} timed out'
    rescue ::Interrupt
      raise $!
    rescue ::Exception => e
      $stderr.puts '#{prefix}#{site} #{e.class} #{e}'
    end
  end
    
          if(pkt.payload =~ self.sigs[k])
        matched = k
        matches = $1
      end
    
    meterp.sock.close

    
    success = clsJavaCompile._invoke('CompileFromMemory','[Ljava.lang.String;[Ljava.lang.String;[Ljava.lang.String;', classNames, codez, compileOpts)
    
      when '6.1.3'
    __NR_execve      = 7
    __NR_getpeername = 205
    __NR_accept      = 232
    __NR_listen      = 235
    __NR_bind        = 237
    __NR_socket      = 238
    __NR_connect     = 239
    __NR_close       = 272
    __NR_kfcntl      = 644
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          spec['version'] = Bootstrap::VERSION
    
          private
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
        # @abstract
    #
    # Your implementation should check if the specified remote-repository is
    # available.
    #
    # @return [Boolean]
    #
    def check
      raise NotImplementedError, 'Your SCM strategy module should provide a #check method'
    end
    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end
    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
        def post_render(page)
      OctopressFilters::post_filter(page)
    end
  end
    
      def download(url, output)
    uri = URI(url)
    digest = Digest::SHA1.new
    tmp = '#{output}.tmp'
    Net::HTTP.start(uri.host, uri.port, :use_ssl => (uri.scheme == 'https')) do |http|
      request = Net::HTTP::Get.new(uri.path)
      http.request(request) do |response|
        fail 'HTTP fetch failed for #{url}. #{response}' if [200, 301].include?(response.code)
        size = (response['content-length'].to_i || -1).to_f
        count = 0
        File.open(tmp, 'w') do |fd|
          response.read_body do |chunk|
            fd.write(chunk)
            digest << chunk
            if size > 0 && $stdout.tty?
              count += chunk.bytesize
              $stdout.write(sprintf('\r%0.2f%%', count/size * 100))
            end
          end
        end
        $stdout.write('\r      \r') if $stdout.tty?
      end
    end