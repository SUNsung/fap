
        
        def content_for(file)
  contents = File.read(file)
  case file
  when 'History.markdown'
    converted_history(contents)
  else
    contents.gsub(%r!\A# .*\n\n?!, '')
  end
end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    AfterConfiguration do |config|
  f = Jekyll::Cucumber::Formatter.new(nil, $stdout, {})
    
      def self.output_file; test_dir.join('jekyll_output.txt'); end
    
            def start(opts)
          @thread = Thread.new do
            # Use epoll if the kernel supports it
            EM.epoll
            EM.run do
              EM.error_handler { |e| log_error(e) }
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
    module Rex
module Proto
module Http
    
        # Search for the resource handler for the requested URL.  This is pretty
    # inefficient right now, but we can spruce it up later.
    p    = nil
    len  = 0
    root = nil
    
      def self.checksum(data)
    sum = 0
    data.unpack('C*').each {|c| sum += c }
    sum = ~sum + 1
    sum & 0xff
  end
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastReque from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
    desc 'Runs all tests in all Spree engines'
task test: :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rspec'
    end
  end
end
    
              inventory_unit.transaction do
            if inventory_unit.update_attributes(inventory_unit_params)
              fire
              render :show, status: 200
            else
              invalid_resource!(inventory_unit)
            end
          end
        end
    
            private
    
                authorize! :read, @product_property
          end
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
          check_class_collision suffix: 'Worker'
    
            begin
          File.open(fp.path, 'a') { |tmpfp| fp.reopen(tmpfp) }
          fp.sync = true
          nr += 1
        rescue IOError, Errno::EBADF
          # not much we can do...
        end
      end
      nr
    rescue RuntimeError => ex
      # RuntimeError: ObjectSpace is disabled; each_object will only work with Class, pass -X+O to enable
      puts 'Unable to reopen logs: #{ex.message}'
    end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end
    
          arr = Sidekiq.options[:lifecycle_events][event]
      arr.reverse! if reverse
      arr.each do |block|
        begin
          block.call
        rescue => ex
          handle_exception(ex, { context: 'Exception during Sidekiq lifecycle event.', event: event })
          raise ex if reraise
        end
      end
      arr.clear
    end
  end
end

    
        # Default values
    set :sessions, true
    
      option '--source-date-epoch-from-changelog', :flag,
    'Use release date from changelog as timestamp on generated files to reduce nondeterminism. ' \
    'Experimental; only implemented for gem so far. ',
    :default => false
    
          if File.directory?(origin) && origin[-1,1] == '/'
        chdir = chdir == '.' ? origin : File.join(chdir, origin)
        source = '.'
      else
        origin_dir = File.dirname(origin)
        chdir = chdir == '.' ? origin_dir : File.join(chdir, origin_dir)
        source = File.basename(origin)
      end
    else
      source, destination = path, '/'
    end
    
        temp_info = pkginfo_template_path
    
        # do channel-update if requested
    if attributes[:pear_channel_update?]
      channel = attributes[:pear_channel] || 'pear'
      logger.info('Updating the channel', :channel => channel)
      safesystem('pear', '-c', config, 'channel-update', channel)
    end
    
      # This method is used by the puppet manifest template
  def puppetsort(hash)
    # TODO(sissel): Implement sorting that follows the puppet style guide
    # Such as, 'ensure' goes first, etc.
    return hash.to_a
  end # def puppetsort