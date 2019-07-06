
        
            forms
  end
    
      #
  # A hash that associated a file extension with a mime type for use as the
  # content type of responses.
  #
  ExtensionMimeTypes =
    {
      'rhtml' => 'text/html',
      'html'  => 'text/html',
      'htm'   => 'text/htm',
      'jpg'   => 'image/jpeg',
      'jpeg'  => 'image/jpeg',
      'gif'   => 'image/gif',
      'png'   => 'image/png',
      'bmp'   => 'image/bmp',
      'txt'   => 'text/plain',
      'css'   => 'text/css',
      'ico'   => 'image/x-icon',
    }
    
    
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
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of a Principal stored in the Kerberos Credential Cache.
        class Principal < Element
          # @!attribute name_type
          #   @return [Integer]
          attr_accessor :name_type
          # @!attribute realm
          #   @return [String]
          attr_accessor :realm
          # @!attribute components
          #   @return [Array<String>]
          attr_accessor :components
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KRB-ERROR (response error)
        # message definition.
        class KrbError < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of a protocol message
          attr_accessor :msg_type
          # @!attribute ctime
          #   @return [Time] The current time of the client's host
          attr_accessor :ctime
          # @!attribute cusec
          #   @return [Integer] The microseconds part of the client timestamp
          attr_accessor :cusec
          # @!attribute stime
          #   @return [Time] The current time of the server
          attr_accessor :stime
          # @!attribute susec
          #   @return [Integer] The microseconds part of the server timestamp
          attr_accessor :susec
          # @!attribute error_code
          #   @return [Integer] The error request returned by kerberos or the server when a request fails
          attr_accessor :error_code
          # @!attribute crealm
          #   @return [String] The realm part of the client's principal identifier
          attr_accessor :crealm
          # @!attribute cname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the client's principal identifier
          attr_accessor :cname
          # @!attribute realm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :realm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname
          # @!attribute e_data
          #   @return [String] additional data about the error (ASN.1 encoded data)
          attr_accessor :e_data
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
            def validate!
          super
          help! 'A podspec name is required.' unless @query
          validate_regex!(@query) if @use_regex
        end