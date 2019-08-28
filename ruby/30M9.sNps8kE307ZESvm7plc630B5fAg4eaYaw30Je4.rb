
        
          def test_render_json
    get :one
    assert_response :success
    assert_equal({ a: 'b' }.to_json, @response.body)
    assert_equal 'application/json', @response.media_type
  end
    
      def setup
    # enable a logger so that (e.g.) the benchmarking stuff runs, so we can get
    # a more accurate simulation of what happens in 'real life'.
    super
    @controller.logger = ActiveSupport::Logger.new(nil)
  end
    
              if formula_tap == 'homebrew-core' && (depends_on?('veclibfort') || depends_on?('lapack'))
            problem 'Formulae should use OpenBLAS as the default serial linear algebra library.'
          end
    
        it 'hardcoded g++ compiler system' do
      expect_offense(<<~'RUBY')
        class Foo < Formula
          desc 'foo'
          url 'https://brew.sh/foo-1.0.tgz'
          def install
            system '/usr/bin/g++', '-o', 'foo', 'foo.cc'
                    ^^^^^^^^^^^^ Use '#{ENV.cxx}' instead of hard-coding 'g++'
          end
        end
      RUBY
    end
    
          alias generic_find_matching_tag find_matching_tag
    
        it 'returns nil if empty' do
      expect(subject.fetch_checksum_for(:foo)).to be nil
    end
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
        def downloader
      @downloader ||= begin
        strategy = DownloadStrategyDetector.detect(cask.url.to_s, cask.url.using)
        strategy.new(cask.url.to_s, cask.token, cask.version, cache: Cache.path, **cask.url.specs)
      end
    end
    
          metadata_master_container_path.join(cask_version)
    end
    
        # define the file location
    if smb_share == 'ADMIN$'
      file_location = '%SYSTEMROOT%\\#{filename}'
    elsif smb_share =~ /^[a-zA-Z]\$$/
      file_location = smb_share.slice(0,1) +  ':\\#{filename}'
    else
      file_location = '\\\\127.0.0.1\\#{smbshare}\\#{fileprefix}\\#{filename}'
    end
    
    
    {          This module was tested on Horde versions 5.2.22 and 5.2.17 running Horde Form subcomponent < 2.0.19.
        },
      'License'         => MSF_LICENSE,
      'Author'          =>
        [
          'Ratiosec',
        ],
      'References'      =>
        [
          ['CVE', '2019-9858'],
          ['URL', 'https://www.ratiosec.com/2019/horde-groupware-webmail-authenticated-arbitrary-file-injection-to-rce/'],
        ],
      'DisclosureDate'  => 'Mar 24 2019',
      'Platform'        => 'php',
      'Arch'            => ARCH_PHP,
      'Targets'         =>
        [
          ['Automatic', { }],
        ],
      'DefaultTarget'   => 0
    ))
    
    require 'rex/proto/ipmi/utils'
    
                seq_asn1 = OpenSSL::ASN1::ASN1Data.new([seq], AP_REQ, :APPLICATION)
    
                res = ''
            case etype
            when RC4_HMAC
              res = encrypt_rc4_hmac(data, key, 5)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end