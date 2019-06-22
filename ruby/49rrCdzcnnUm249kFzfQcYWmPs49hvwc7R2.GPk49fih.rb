
        
          # This array contains name of all ripper events.
  EVENTS = PARSER_EVENTS + SCANNER_EVENTS
    
              case type
          when :released
            unless pkg.spec.version.prerelease?
              names << pkg.spec.name_tuple
            end
          when :prerelease
            if pkg.spec.version.prerelease?
              names << pkg.spec.name_tuple
            end
          when :latest
            tup = pkg.spec.name_tuple
    
      def test_ECPrivateKey
    p256 = Fixtures.pkey('p256')
    asn1 = OpenSSL::ASN1::Sequence([
      OpenSSL::ASN1::Integer(1),
      OpenSSL::ASN1::OctetString(p256.private_key.to_s(2)),
      OpenSSL::ASN1::ObjectId('prime256v1', 0, :EXPLICIT),
      OpenSSL::ASN1::BitString(p256.public_key.to_octet_string(:uncompressed),
                               1, :EXPLICIT)
    ])
    key = OpenSSL::PKey::EC.new(asn1.to_der)
    assert_predicate key, :private?
    assert_same_ec p256, key
    
          accept = true
      IO.select nil, [@socket]
    
              unless complete_option_supported?
            actual = with_term { IRB::Color.colorize_code(code, complete: true) }
            assert_equal(result, actual, 'Case: colorize_code(#{code.dump}, complete: false)\nResult: #{humanized_literal(actual)}')
          end
        else
          actual = with_term { IRB::Color.colorize_code(code) }
          assert_equal(code, actual)
        end
      end
    end
    
    Given(/^a custom task to run in the event of a failure$/) do
  safely_remove_file(TestApp.shared_path.join('failed'))
  TestApp.copy_task_to_test_app('spec/support/tasks/failed.rake')
end
    
    package = FPM::Package::Dir.new
    
        # Validate the package
    if input.name.nil? or input.name.empty?
      logger.fatal('No name given for this package (set name with '-n', ' \
                    'for example, '-n packagename')')
      return 1
    end
    
      # URL for this package.
  # Could be the homepage. Could be the download url. You pick.
  attr_accessor :url
    
      # Nulls out the ownership bits of the given tar [header].
  def replace_ownership_headers(header, nullify_names)
    
        # Create the .txz package archive from the files in staging_path.
    File.open(output_path, 'wb') do |file|
      XZ::StreamWriter.new(file) do |xz|
        FPM::Util::TarWriter.new(xz) do |tar|
          # The manifests must come first for pkg.
          add_path(tar, '+COMPACT_MANIFEST',
                   File.join(staging_path, '+COMPACT_MANIFEST'))
          add_path(tar, '+MANIFEST',
                   File.join(staging_path, '+MANIFEST'))
    
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
    
      end # def output
end # class FPM::Package::IPS

    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
    # Use a zip as a package.
#
# This provides no metadata. Both input and output are supported.
class FPM::Package::Zip < FPM::Package
    
        task(options.name) do |_, task_args|
      block.call(*[options, task_args].first(block.arity)) if block_given?
      abort('Must specify args') unless options.respond_to?(:args)
      @args = options.delete_field(:args)
      run_cli
    end
  end