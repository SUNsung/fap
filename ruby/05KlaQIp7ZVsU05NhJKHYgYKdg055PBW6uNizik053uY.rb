
        
            def type=(value)
      @type = value.try :strip
    end
    
        module MultipleBaseUrls
      def self.included(base)
        base.extend ClassMethods
      end
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
        self.listener = Rex::Socket::TcpServer.create(
      'LocalHost' => self.listen_host,
      'LocalPort' => self.listen_port,
      'Context'   => self.context,
      'SSL'       => self.ssl,
      'SSLCert'   => self.ssl_cert,
      'SSLCompression' => self.ssl_compression,
      'SSLCipher' => self.ssl_cipher,
      'Comm'      => self.comm
    )
    
          dprint( ['RECV', phdr, stype, info].inspect )
      case stype
      when IAX_SUBTYPE_HANGUP
        self.state = :hangup
        self.client.send_ack(self)
      when IAX_SUBTYPE_LAGRQ
        # Lagrps echo the timestamp
        self.client.send_lagrp(self, tstamp)
      when IAX_SUBTYPE_ACK
        # Nothing to do here
      when IAX_SUBTYPE_PING
        # Pongs echo the timestamp
        self.client.send_pong(self, tstamp)
      when IAX_SUBTYPE_PONG
        self.client.send_ack(self)
      else
        dprint( ['RECV-QUEUE', phdr, stype, info].inspect )
        self.queue.push( [phdr, stype, info ] )
      end
    
    
  def self.create_rakp_hmac_sha1_salt(con_sid, bmc_sid, con_rid, bmc_rid, bmc_gid, auth_level, username)
    con_sid +
    bmc_sid +
    con_rid +
    bmc_rid +
    bmc_gid +
    [ auth_level ].pack('C') +
    [ username.length ].pack('C') +
    username
  end
    
              private
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos AuthorizationData data
        # definition.
        class AuthorizationData < Element
          # @!attribute elements
          #   @return [Hash{Symbol => <Integer, String>}] The type of the authorization data
          #   @option [Integer] :type
          #   @option [String] :data
          attr_accessor :elements
    
              # Encodes the checksum field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_checksum
            OpenSSL::ASN1::OctetString.new(checksum)
          end
        end
      end
    end
  end
end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
                res = ''
            case etype
            when RC4_HMAC
              res = decrypt_rc4_hmac(cipher, key, msg_type)
              raise ::RuntimeError, 'EncryptedData failed to decrypt' if res.length < 8
              res = res[8, res.length - 1]
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Decodes the value from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_value(input)
            input.value[0].value
          end
    
              # Rex::Proto::Kerberos::Model::KdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KdcResponse encoding not supported'
          end
    
              # Rex::Proto::Kerberos::Model::KrbError encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'KrbError encoding not supported'
          end
    
    # create and write to opml file
xml = Builder::XmlMarkup.new(indent: 2)
xml.instruct! :xml, version: '1.0', encoding: 'UTF-8'
xml.tag!('opml', version: '1.0') do
  # head
  xml.tag!('head') do
    xml.title TITLE
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('block-all_mixed_content; connect-src 'self'; default-src none; disown-opener; img-src 'self'; script-src 'self'; style-src 'self'; upgrade-insecure_requests')
  end
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
    # Use this to fill in an entire form with data from a table. Example:
#
#   When I fill in the following:
#     | Account Number | 5002       |
#     | Expiry date    | 2009-11-01 |
#     | Note           | Nice guy   |
#     | Wants Email?   |            |
#
# TODO: Add support for checkbox, select og option
# based on naming conventions.
#
When /^(?:|I )fill in the following:$/ do |fields|
  fields.rows_hash.each do |name, value|
    When %{I fill in '#{name}' with '#{value}'}
  end
end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
        def add_paperclip_callbacks
      @klass.send(
        :define_paperclip_callbacks,
        :post_process, :'#{@name}_post_process')
    end