
        
                # Natively trimming the image with .trim will result in the loss of the common baseline between the text in all images when side-by-side (e.g. stack_title is false).
        # Hence retrieve the calculated trim bounding box without actually trimming:
        calculated_trim_box = text_image.identify do |b|
          b.format('%@') # CALCULATED: trim bounding box (without actually trimming), see: http://www.imagemagick.org/script/escape.php
        end
    
            # Convert build_nr to int (for legacy use) if no '.' in string
        if build_nr.kind_of?(String) && !build_nr.include?('.')
          build_nr = build_nr.to_i
        end
    
              metric = (tester.beta_tester_metrics || []).first
          if metric.installed?
            install_version = '#{metric.installed_cf_bundle_short_version_string} (#{metric.installed_cf_bundle_version})'
            pretty_date = metric.installed_cf_bundle_version
          end
    
        # Requires a block that accepts a tester and returns an array of tester column values
    def list(all_testers, title, headings)
      rows = all_testers.map { |tester| yield(tester) }
      puts(Terminal::Table.new(
             title: title.green,
             headings: headings,
             rows: FastlaneCore::PrintTable.transform_output(rows)
      ))
    end
    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_bundle_ids(filter: filter, includes: includes).all_pages
        return resps.map(&:to_models).flatten
      end
    
          attr_accessor :device_class
      attr_accessor :model
      attr_accessor :name
      attr_accessor :platform
      attr_accessor :status
      attr_accessor :udid
      attr_accessor :added_date
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
            # Sends a kerberos request, and reads the response through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] The kerberos message
        # @raise [RuntimeError] if the transport protocol is unknown or the response can't be parsed.
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_recv(req)
          send_request(req)
          res = recv_response
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
              private
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
                address.delete(:country)
            address[:country_id] = Spree::Country.where(search).first!.id
          rescue Exception => e
            raise 'Ensure order import address country: #{e.message} #{search}'
          end
        end
    
            def new; end
    
            def ready
          unless @shipment.ready?
            if @shipment.can_ready?
              @shipment.ready!
            else
              render 'spree/api/v1/shipments/cannot_ready_shipment', status: 422 and return
            end
          end
          respond_with(@shipment, default_template: :show)
        end
    
          it 'should have the correct architecture' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.architecture } == original.architecture
      end
    
      FPM::Package.types.each do |name, klass|
    klass.apply_options(self)
  end
    
      def template(path)
    template_path = File.join(template_dir, path)
    template_code = File.read(template_path)
    logger.info('Reading template', :path => template_path)
    erb = ERB.new(template_code, nil, '-')
    erb.filename = template_path
    return erb
  end # def template
    
        temporary_target_path = target_path + '~'
    
      # Extract name and version from PackageInfo XML
  def extract_info(package)
    build_path('expand').tap do |path|
      doc = REXML::Document.new File.open(File.join(path, 'PackageInfo'))
      pkginfo_elem = doc.elements['pkg-info']
      identifier = pkginfo_elem.attribute('identifier').value
      self.version = pkginfo_elem.attribute('version').value
      # set name to the last dot element of the identifier
      self.name = identifier.split('.').last
      logger.info('inferring name #{self.name} from pkg-id #{identifier}')
    end
  end # def extract_info
    
        # Remove the stuff we don't want
    delete_these = ['.depdb', '.depdblock', '.filemap', '.lock', '.channel', 'cache', 'temp', 'download', '.channels', '.registry']
    Find.find(staging_path) do |path|
      if File.file?(path)
        logger.info('replacing staging_path in file', :replace_in => path, :staging_path => staging_path)
        begin
          content = File.read(path).gsub(/#{Regexp.escape(staging_path)}/, '')
          File.write(path, content)
        rescue ArgumentError => e
          logger.warn('error replacing staging_path in file', :replace_in => path, :error => e)
        end
      end
      FileUtils.rm_r(path) if delete_these.include?(File.basename(path))
    end