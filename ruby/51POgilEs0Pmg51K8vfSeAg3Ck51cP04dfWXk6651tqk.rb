
        
        puts 'start: #{start.to_s(16)}'
branch = `rasm2 -b 64 -a arm 'b 0x#{start.to_s(16)}'`
puts 'branch: #{branch}'
output_data[0,4] = [ branch[0..7] ].pack('H*')
    
        begin
      session.sys.process.execute(remote_browser_path, '#{args} #{tmp_dir}\\interface.html', exec_opts)
    rescue RuntimeError => e
      elog('webcam_chat failed. #{e.class} #{e}')
      raise 'Unable to start the remote browser: #{e.message}'
    end
  end
end
end
end
end
end
end
end

    
      def check
    if session.sys.process['SearchIndexer.exe']
      return Exploit::CheckCode::Detected
    end
    
      if(not remove)
    print_status('Creating a meterpreter service on port #{rport}')
  else
    print_status('Removing the existing Meterpreter service')
  end
    
          # Start the video
      data_js = %Q|'data:text/html,<script>window.open('#{youtube_url}','','width:100000px;height:100000px');</script>'|
      joe = 'firefox --display #{display} -p #{profile_name} #{data_js} &'
      cmd_exec('/bin/sh -c #{joe.shellescape}')
    rescue EOFError
      return false
    end
    
      def initialize(info = {})
    super(
      update_info(
        info,
        'Name'          => 'OSX Meterpreter, Reverse HTTP Inline',
        'Description'   => 'Run the Meterpreter / Mettle server payload (stageless)',
        'Author'        => [
          'Adam Cammack <adam_cammack[at]rapid7.com>',
          'Brent Cook <brent_cook[at]rapid7.com>',
          'timwr'
        ],
        'Platform'      => 'osx',
        'Arch'          => ARCH_X64,
        'License'       => MSF_LICENSE,
        'Handler'       => Msf::Handler::ReverseHttp,
        'Session'       => Msf::Sessions::Meterpreter_x64_OSX
      )
    )
  end
    
        def perform
      return User.none unless valid?
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end

    
      rescue_from ActiveRecord::StatementInvalid do
    render plain: I18n.t('aspect_memberships.destroy.invalid_statement'), status: 400
  end
    
        opts = params.require(:message).permit(:text)
    message = current_user.build_message(conversation, opts)