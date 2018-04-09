
        
          def test_simple_redirect_using_options
    get :host_redirect
    assert_response :redirect
    assert_redirected_to action: 'other_host', only_path: false, host: 'other.test.host'
  end
    
        assert_response :success
  end
    
    require 'tmpdir'
    
      APP = RoutedRackApp.new(Routes)
    
      def search_tap(user, repo, rx)
    if (HOMEBREW_LIBRARY/'Taps/#{user.downcase}/homebrew-#{repo.downcase}').directory? && \
       user != 'Caskroom'
      return []
    end
    
      def patches
    {}
  end
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
    # puts '\nDone.'

    
      def test_filter!
    h = @cls[1=>2,3=>4,5=>6]
    assert_equal(h, h.filter! {|k, v| k + v >= 7 })
    assert_equal({3=>4,5=>6}, h)
    h = @cls[1=>2,3=>4,5=>6]
    assert_equal(nil, h.filter!{true})
  end
    
      Car = Struct.new(:make, :model, :year)
    
            sets = config.sources_manager.aggregate.all_sets
        sets.each { |set| UI.pod(set, :name_and_version) }
        UI.puts '\n#{sets.count} pods were found'
      end