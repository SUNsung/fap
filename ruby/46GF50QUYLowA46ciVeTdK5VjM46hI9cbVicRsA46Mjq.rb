
        
            begin
      response = U2F::RegisterResponse.load_from_json(params[:device_response])
      registration_data = u2f.register!(challenges, response)
      registration.update(certificate: registration_data.certificate,
                          key_handle: registration_data.key_handle,
                          public_key: registration_data.public_key,
                          counter: registration_data.counter,
                          user: user,
                          name: params[:name])
    rescue JSON::ParserError, NoMethodError, ArgumentError
      registration.errors.add(:base, 'Your U2F device did not send a valid JSON response.')
    rescue U2F::Error => e
      registration.errors.add(:base, e.message)
    end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
    
    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
    module Jekyll
    
          unless file.file?
        return 'File #{file} could not be found'
      end