
        
                  # Encodes the Rex::Proto::Kerberos::CredentialCache::Time into an String
          #
          # @return [String] encoded time
          def encode
            encoded = ''
            encoded << encode_auth_time
            encoded << encode_start_time
            encoded << encode_end_time
            encoded << encode_renew_time
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos EncryptionKey data
        # definition
        class EncryptionKey < Element
    
              # Decodes a Rex::Proto::Kerberos::Model::KdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        task :clean_env => [:clean_vcr, 'fixture_tarballs:unpack', 'ext:cleanbuild']
  end
    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC